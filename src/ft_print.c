/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/06 18:27:16 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/12/07 16:28:29 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_printint(int i, unsigned int nb)
{
	char	a[16];
	int		c;

	c = 0;
	if (i == 1)
	{
		if ((int)nb < 0)
		{
			nb = -((int)nb);
			c += ft_putchar('-');
		}
	}
	i = 0;
	if (nb == 0)
		return (ft_putchar('0'));
	while (nb > 0)
	{
		a[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	c += i;
	while (--i >= 0)
		ft_putchar(a[i]);
	return (c);
}
