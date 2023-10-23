/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 15:11:42 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/10/20 17:21:29 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	s;
	void	*r;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	s = nmemb * size;
	r = malloc(s);
	if (r == NULL)
		return (NULL);
	else
		ft_bzero(r, s);
	return (r);
}
