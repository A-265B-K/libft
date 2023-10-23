/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:41:26 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/10/12 19:54:27 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < size - 1)
			dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
