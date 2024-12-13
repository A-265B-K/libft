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

#include "ft_printf_fd.h"

int	ft_indicators_fd(char indic, int fd, va_list va)
{
	int	c;

	c = 0;
	if (indic == 'c')
		c += ft_putchar_fd(va_arg(va, int), fd);
	else if (indic == 's')
		c += ft_putstr_fd(va_arg(va, char *), fd);
	else if (indic == 'd' || indic == 'i')
		c += ft_printint_fd(1, va_arg(va, int), fd);
	else if (indic == 'u')
		c += ft_printint_fd(0, va_arg(va, unsigned int), fd);
	else if (indic == 'x' || indic == 'X')
		c += ft_hexd_fd(va_arg(va, int), indic, fd);
	else if (indic == 'p')
		c += ft_pointer_fd(va_arg(va, void *), fd);
	else if (indic == '%')
		c += ft_putchar_fd('%', fd);
	return (c);
}

int	ft_printf_fd(int fd, const char *s, ...)
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
			c += ft_indicators_fd(s[++i], fd, va);
		else
			c += ft_putchar_fd(s[i], fd);
		i++;
	}
	va_end(va);
	return (c);
}
