/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 17:15:51 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/10/20 12:52:42 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_nb_size(int nb)
{
	int	l;

	l = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		l++;
	while (nb > 0)
	{
		nb /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		l;

	l = ft_nb_size(n);
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	str[l] = '\0';
	while (n > 0)
	{
		str[l - 1] = (n % 10) + '0';
		n = n / 10;
		l--;
	}
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(18));
// 	return (0);
// }