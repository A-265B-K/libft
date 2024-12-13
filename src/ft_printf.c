/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 17:49:57 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/12/12 14:17:36 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_indicators(char indic, va_list va)
{
	int	c;

	c = 0;
	if (indic == 'c')
		c += ft_putchar(va_arg(va, int));
	else if (indic == 's')
		c += ft_putstr(va_arg(va, char *));
	else if (indic == 'd' || indic == 'i')
		c += ft_printint(1, va_arg(va, int));
	else if (indic == 'u')
		c += ft_printint(0, va_arg(va, unsigned int));
	else if (indic == 'x' || indic == 'X')
		c += ft_hexd(va_arg(va, int), indic);
	else if (indic == 'p')
		c += ft_pointer(va_arg(va, void *));
	else if (indic == '%')
		c += ft_putchar('%');
	return (c);
}

int	ft_printf(const char *s, ...)
{
	va_list	va;
	int		i;
	int		c;

	i = 0;
	c = 0;
	va_start(va, s);
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '%')
			c += ft_indicators(s[++i], va);
		else
			c += ft_putchar(s[i]);
		i++;
	}
	va_end(va);
	return (c);
}
