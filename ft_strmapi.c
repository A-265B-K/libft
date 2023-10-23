/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 14:57:58 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/10/20 17:42:45 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(*str) * (ft_strlen(s) + 1));
	while (s[i] != '\0')
		str[i] = f(i, *(char *)(s + i));
	str[i] = '\0';
	return (str);
}
