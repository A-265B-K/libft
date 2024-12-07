/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:41:35 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/11/05 14:51:59 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[i2] && (i + i2 + 1) < size)
	{
		dst[i + i2] = src[i2];
		i2++;
	}
	if (i < size)
		dst[i + i2] = '\0';
	return (i + ft_strlen(src));
}
