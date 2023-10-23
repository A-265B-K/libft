/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 17:43:38 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/10/20 18:06:16 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_memset(void *s, int c, size_t n)
{
	while (n-- > 0)
		*(char *)s++ = c;
}