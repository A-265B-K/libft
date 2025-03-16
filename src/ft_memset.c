/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 17:43:38 by alkuijte      #+#    #+#                 */
/*   Updated: 2025/03/09 12:40:33 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*h;

	h = s;
	while (n--)
		h[n] = (unsigned char)c;
	return (s);
}
