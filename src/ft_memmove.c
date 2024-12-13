/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:38:11 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/11/06 14:50:07 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destp;
	unsigned char	*srcp;
	int				i;

	if (!src && !dest)
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
