/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/09 12:11:48 by alkuijte      #+#    #+#                 */
/*   Updated: 2025/03/09 12:47:43 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strcat(char *dst, const char *src)
{
	size_t	i;
	size_t	i2;

	i = 0;
	while (dst[i] != '\0')
		i++;
	i2 = 0;
	while (src[i2] != '\0')
	{
		dst[i + i2] = src[i2];
		i2++;
	}
	dst[i + i2] = '\0';
	return (i + i2);
}
