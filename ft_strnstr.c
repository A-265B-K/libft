/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:41:45 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/10/19 13:22:05 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i2;

	if (little == NULL || *little == '\0')
		return ((char *)big);
	i = 0;
	i2 = 0;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[i2])
		{
			while (big[i + i2] == little[i2] && i + i2 < len)
			{
				if (little[i2 + 1] == '\0')
					return ((char *)(big + i));
				i2++;
			}
			i2 = 0;
		}
		i++;
	}
	return (NULL);
}
