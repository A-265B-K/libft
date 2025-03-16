/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:44:06 by alkuijte      #+#    #+#                 */
/*   Updated: 2025/03/09 12:42:04 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s1 == *s2 && n-- > 1)
	{
		s1++;
		s2++;
	}
	return ((*(unsigned char *)s1 - *(unsigned char *)s2));
}
