/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:41:35 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/10/12 19:54:12 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	while (dst[i] != '\0')
		i++;
	if (size < 1)
		return (i - 1);
	while (src[i2] != '\0' && (i + i2 + 1) < size)
	{
		dst[i + i2] = src[i2];
		i2++;
	}
	if (i < size)
		dst[i + i2] = '\0';
	return (i + i2);
}
