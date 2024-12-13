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

#include "ft_printf_fd.h"

int	ft_printint_fd(int i, unsigned int nb, int fd)
{
	char	a[16];
	int		c;

	c = 0;
	if (i == 1)
	{
		if ((int)nb < 0)
		{
			nb = -((int)nb);
			c += ft_putchar_fd('-', fd);
		}
	}
	i = 0;
	if (nb == 0)
		return (ft_putchar_fd('0', fd));
	while (nb > 0)
	{
		a[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	c += i;
	while (--i >= 0)
		ft_putchar_fd(a[i], fd);
	return (c);
}
