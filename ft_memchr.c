/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:38:01 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/10/20 17:47:29 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
		if (*(char *)s++ == c)
			return ((void *)s);
	return (NULL);
}
