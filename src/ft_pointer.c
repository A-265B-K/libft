/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pointer.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/06 18:28:38 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/12/12 14:18:18 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_hexd(unsigned int nb, char x)
{
	int		i;
	int		r;
	int		c;
	char	a[8];

	i = 0;
	c = 0;
	if (nb == 0)
		return (ft_putchar('0'));
	while (nb > 0)
	{
		r = nb % 16;
		if (r < 10)
			a[i] = r + '0';
		else
			a[i] = r - 33 + x;
		nb /= 16;
		i++;
	}
	while (--i >= 0)
		c += ft_putchar(a[i]);
	return (c);
}

int	ft_hexd2(unsigned long long nb)
{
	int		i;
	int		r;
	int		c;
	char	a[16];

	i = 0;
	c = 0;
	if (nb == 0)
		return (ft_putchar('0'));
	while (nb > 0)
	{
		r = nb % 16;
		if (r < 10)
			a[i] = r + '0';
		else
			a[i] = r - 10 + 'a';
		nb /= 16;
		i++;
	}
	while (--i >= 0)
		c += ft_putchar(a[i]);
	return (c);
}

int	ft_pointer(void *p)
{
	unsigned long long	a;
	int					c;

	c = 2;
	a = (unsigned long long)p;
	if (a == 0)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	c += ft_hexd2(a);
	return (c);
}
