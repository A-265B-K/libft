/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 18:18:14 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/11/05 14:52:16 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	i2;
	char	*str;

	i = 0;
	i2 = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[i2] != '\0')
		i2++;
	str = (char *)malloc(sizeof(*str) * (i + i2 + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	i2 = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i2] != '\0')
		str[i++] = s2[i2++];
	str[i] = '\0';
	return (str);
}
