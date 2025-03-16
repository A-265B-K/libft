/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 17:53:44 by alkuijte      #+#    #+#                 */
/*   Updated: 2025/03/09 12:38:22 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	if (start >= ft_strlen(s))
		len = 0;
	else if (ft_strlen(s) < start + len)
		len = ft_strlen(s) - start;
	r = malloc(sizeof(*s) * (len + 1));
	if (r == NULL)
		return (NULL);
	while (s[i] && len > 0)
	{
		if (i >= start && i2 < len)
		{
			r[i2] = s[i];
			i2++;
		}
		i++;
	}
	r[len] = '\0';
	return (r);
}
