/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 15:36:25 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/10/20 17:22:09 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	i2;
	char	*str;

	i = 0;
	i2 = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (i2 + 1));
	while (i < i2)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
