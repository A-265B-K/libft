/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 17:50:42 by alkuijte      #+#    #+#                 */
/*   Updated: 2025/03/09 12:38:29 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

	// if (!s)
	// 	return (NULL);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = (char)c;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	if (c == 0)
		return ((char *)s);
	return (0);
}
