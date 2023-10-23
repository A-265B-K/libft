/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:38:03 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/10/20 17:47:03 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	res;

	res = 0;
	while (n--)
		res += (*(char *)s1++ - *(char *)s2++);
	return (res);
}