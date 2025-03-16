/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy2.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/09 12:19:41 by alkuijte      #+#    #+#                 */
/*   Updated: 2025/03/09 12:47:00 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strlcpy2(char *str, int c)
{
	char	*out;
	int		i;

	i = 0;
	out = malloc(ft_strlen(str) - c + 1);
	if (!out)
		return (NULL);
	while (str[c])
		out[i++] = str[c++];
	out[i] = '\0';
	return (out);
}
