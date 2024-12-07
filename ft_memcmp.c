/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:38:03 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/11/05 15:49:07 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*one;
	char	*two;

	one = (char *)s1;
	two = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (one[i] != two[i])
			return (((unsigned char)one[i] - (unsigned char)two[i]));
		i++;
	}
	return (0);
}
