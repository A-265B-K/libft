/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp2.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/09 12:06:18 by alkuijte      #+#    #+#                 */
/*   Updated: 2025/03/09 12:44:04 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strcmp2(const char *s1, const char *s2)
{
	if (!s1)
	{
		if (!s2)
			return (0);
		return (*s2);
	}
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return ((unsigned char)(*s1) - (unsigned char)(*s2));
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
