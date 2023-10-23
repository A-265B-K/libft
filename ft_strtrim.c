/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 14:09:08 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/10/13 13:21:37 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	i2;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		i2 = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[i2 - 1] && ft_strchr(set, s1[i2 - 1]) && i2 > i)
			i2--;
		str = (char *)malloc(sizeof(*str) * (i2 - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], i2 - i);
	}
	return (str);
}
