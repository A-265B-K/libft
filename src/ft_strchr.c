/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:43:25 by alkuijte      #+#    #+#                 */
/*   Updated: 2025/03/09 12:40:58 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

	// if (!s)
	// 	return (NULL);

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (unsigned char)c)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
