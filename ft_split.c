/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 14:31:48 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/10/19 13:19:49 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_wordlength(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s != c && *s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

static int	ft_wordcount(const char *s, char c)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	while (*s != '\0')
	{
		if (*s == c)
			word = 0;
		else if (word == 0)
		{
			word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*ft_loc(const char *s, char c)
{
	char	*w;
	int		i;
	int		word_len;

	i = 0;
	word_len = ft_wordlength(s, c);
	w = (char *)malloc(sizeof(char) * (word_len + 1));
	if (w == NULL)
		return (NULL);
	while (*s != c && *s != '\0')
	{
		w[i++] = *s;
		s++;
	}
	w[i] = '\0';
	return (w);
}

static void	ft_free(char **strs)
{
	int	i;

	i = 0;
	while (*strs[i] != '\0')
		free(strs[i++]);
	free(strs);
}

char	**ft_split(const char *s, char c)
{
	int		count;
	char	**strs;
	int		i;

	count = ft_wordcount(s, c);
	strs = (char **)malloc(sizeof(char *) * (count + 1));
	if (strs == NULL)
		return (NULL);
	*strs[count] = '\0';
	i = 0;
	while (i < count)
	{
		strs[i] = ft_loc(s, c);
		if (strs[i] == NULL)
			ft_free(strs);
		s += ft_wordlength(s, c);
		if (*s != '\0')
			s++;
		i++;
	}
	return (strs);
}
// int main(void)
// {
//     const char *str = "King Gizzard & the Lizard Wizard";
//     char c = ' ';
//     char **result = ft_split(str, c);
//     // if (result == NULL)
//     //     return 1;
//     for (int i = 0; result[i] != NULL; i++)
//         printf("%s\n", result[i]);
//     // ft_free(result);
//     return 0;
// }
