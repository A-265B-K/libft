/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strlcat.c                                   █   █ ████  ███  █   █    */
/*                                                  ██ ██ █    █   █ █   █    */
/*   By: alkuijte <alkuijte@codam.nl                █ █ █ ███  █   █ █ █ █    */
/*                        		 	                █   █ █    █   █ ██ ██    */
/*   Created: 2024/12/08 10:21:47 by alkuijte       █   █ ████  ███  █   █    */
/*   Updated: 2024/12/08 10:25:37 by alkuijte        github.com/A-265B-K      */
/*                                                                            */
/* ************************************************************************** */

//  █   █ ████  ███  █   █ 
//  ██ ██ █    █   █ █   █ 
//  █ █ █ ███  █   █ █ █ █ 
//  █   █ █    █   █ ██ ██ 
//  █   █ ████  ███  █   █ 
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[i2] && (i + i2 + 1) < size)
	{
		dst[i + i2] = src[i2];
		i2++;
	}
	if (i < size)
		dst[i + i2] = '\0';
	return (i + ft_strlen(src));
}
