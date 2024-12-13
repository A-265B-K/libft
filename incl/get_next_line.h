/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 14:17:41 by alkuijte      #+#    #+#                 */
/*   Updated: 2024/01/11 14:10:25 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h> 
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
char	*ft_cat(char *dst, const char *src);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_raa(int fd, char *storage[]);
char	*ft_extract(char **storage);
char	*ft_ros(char **storage);
char	*ft_strchr(const char *s, int c);
void	ft_free(char **buffer);

#endif
