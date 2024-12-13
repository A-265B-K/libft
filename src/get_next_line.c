/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/10 17:50:56 by alkuijte      #+#    #+#                 */
/*   Updated: 2024/01/11 14:05:00 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*storage[1024];
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1 || fd > 1024)
		return (NULL);
	if (!storage[fd])
	{
		storage[fd] = malloc(1);
		if (!storage[fd])
			return (NULL);
		storage[fd][0] = '\0';
	}
	storage[fd] = ft_raa(fd, storage);
	if (!storage[fd])
		return (NULL);
	if (!storage[fd][0])
		return (ft_free(&storage[fd]), NULL);
	line = ft_extract(&storage[fd]);
	if (!line)
		return (ft_free(&storage[fd]), NULL);
	storage[fd] = ft_ros(&storage[fd]);
	return (line);
}
// read and append 

char	*ft_raa(int fd, char *storage[])
{
	char	*buffer;
	ssize_t	n;

	n = 1;
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (ft_free(&storage[fd]), NULL);
	buffer[0] = '\0';
	while (n > 0 && !(ft_strchr(storage[fd], '\n')))
	{
		n = read(fd, buffer, BUFFER_SIZE);
		if (n == -1)
			return (ft_free(&storage[fd]), free(buffer), NULL);
		buffer[n] = '\0';
		storage[fd] = ft_cat(storage[fd], buffer);
		if (!storage[fd])
			break ;
	}
	return (free(buffer), storage[fd]);
}

char	*ft_extract(char **storage)
{
	char	*line;
	size_t	i;

	line = (char *)malloc(sizeof(char) * (ft_strlen(*storage) + 1));
	if (!line)
		return (ft_free(&*storage), NULL);
	i = -1;
	while (*storage && (*storage)[++i] && (*storage)[i] != '\n')
		line[i] = (*storage)[i];
	if (*storage && (*storage)[i] == '\n')
	{
		line[i] = (*storage)[i];
		++i;
	}
	line[i] = '\0';
	return (line);
}

//rest of storage
char	*ft_ros(char **storage)
{
	size_t		i;
	size_t		i2;
	char		*line;

	i = 0;
	i2 = 0;
	while ((*storage)[i] && (*storage)[i] != '\n')
		++i;
	line = (char *)malloc(sizeof(char) * (ft_strlen(*storage + i) + 1));
	if (!line)
		return (ft_free(&*storage), NULL);
	if ((*storage)[i] != '\0')
	{
		++i;
		while ((*storage)[i])
			line[i2++] = (*storage)[i++];
		if ((*storage)[i++] == '\n')
			line[i2++] = '\n';
	}
	line[i2] = '\0';
	return (ft_free(&*storage), line);
}
