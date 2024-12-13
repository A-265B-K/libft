/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 14:17:44 by alkuijte      #+#    #+#                 */
/*   Updated: 2024/01/11 14:10:19 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_cat(char *dst, const char *src)
{
	size_t	i;
	size_t	i2;
	char	*temp;

	i = -1;
	i2 = -1;
	temp = malloc(sizeof(char) * (ft_strlen(dst) + ft_strlen(src) + 1));
	if (!temp)
		return (free(dst), NULL);
	while (dst[++i])
		temp[i] = dst[i];
	while (src[++i2])
		temp[i + i2] = src[i2];
	temp[i + i2] = '\0';
	return (free(dst), temp);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (unsigned char)c)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

void	ft_free(char **storage)
{
	free(*storage);
	*storage = NULL;
}
