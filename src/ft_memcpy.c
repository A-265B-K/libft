/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 17:46:10 by alkuijte      #+#    #+#                 */
/*   Updated: 2025/03/09 12:40:20 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destp;
	unsigned char	*srcp;
	int				i;

	if (!dest && !src)
		return (NULL);
	destp = (unsigned char *)dest;
	srcp = (unsigned char *)src;
	if (destp < srcp)
		while (n--)
			*destp++ = *srcp++;
	else
	{
		i = n;
		while (i--)
			destp[i] = srcp[i];
	}
	return (dest);
}
