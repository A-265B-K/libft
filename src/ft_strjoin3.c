/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin3.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/09 12:08:03 by alkuijte      #+#    #+#                 */
/*   Updated: 2025/03/09 12:43:55 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin3(const char *s1, const char *s2, const char *s3)
{
	char	*res;

	res = malloc(ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3) + 1);
	if (!res)
		return (NULL);
	ft_strcpy(res, s1);
	ft_strcat(res, s2);
	ft_strcat(res, s3);
	return (res);
}
