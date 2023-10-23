/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 17:45:01 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/10/23 17:51:15 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_striteri(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(*str) * (ft_strlen(s) + 1));
	while (s[i] != '\0')
		str[i] = f(i, *(char *)(s + i));
	str[i] = '\0';
	return (str);
}