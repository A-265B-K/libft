/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 17:15:51 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/11/05 14:53:51 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_leng(int nb)
{
	int	l;

	l = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		l++;
	while (nb != 0)
	{
		nb /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				l;
	unsigned int	res;

	l = ft_leng(n);
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		res = -n;
	}
	else
		res = n;
	if (res == 0)
		str[0] = '0';
	str[l] = '\0';
	while (res > 0)
	{
		str[l - 1] = (res % 10) + '0';
		res = res / 10;
		l--;
	}
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(18));
// 	return (0);
// }