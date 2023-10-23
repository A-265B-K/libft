/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:38:11 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/10/12 19:49:58 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destp;
	char	*srcp;
	int		i;

	destp = (char *)dest;
	srcp = (char *)src;
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
