/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 17:45:01 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/10/23 17:53:30 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	*ft_striteri(char const *s, char (*f)(unsigned int, char))
{
	while (*s++ != '\0')
		*s = f(i, *s);
}