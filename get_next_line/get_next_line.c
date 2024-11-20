/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   get_next_line.c                                         \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/10 12:19:46 by patricia          | `))                  */
/*   Updated: 2024/11/10 12:19:46 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "get_next_line.h"

/* ************************************************************************** */
/* Reads data from the File Descriptor + appends it to existing buffer        */
/* ************************************************************************** */
static char	*read_and_store(int fd, char *leftover)
{
	char	*read_buf;
	ssize_t	bytes_read;
	char	*temp;

	read_buf = malloc(BUFFER_SIZE + 1);
	if (!read_buf)
		return (NULL);
	bytes_read = read(fd, read_buf, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		read_buf[bytes_read] = '\0';
		temp = leftover;
		leftover = ft_strjoin(leftover, read_buf);
		free(temp);
		if (ft_strchr(leftover, '\n'))
			break ;
		bytes_read = read(fd, read_buf, BUFFER_SIZE);
	}
	free(read_buf);
	if (bytes_read < 0)
	{
		free(leftover);
		return (NULL);
	}
	return (leftover);
}

/* ************************************************************************** */
/* Extracts a line up to a new line '\n\ or the end of the buffer '\0'        */
/* ************************************************************************** */
static char	*extract_line(char *buffer)
{
	char	*newline_pos;
	char	*line;
	size_t	len;

	if (!buffer || *buffer == '\0')
		return (NULL);
	newline_pos = ft_strchr(buffer, '\n');
	if (newline_pos)
		len = newline_pos - buffer + 1;
	else
		len = ft_strlen(buffer);
	line = malloc(len + 1);
	if (!line)
		return (NULL);
	ft_strlcpy(line, buffer, len + 1);
	return (line);
}

static char	*save_leftover(char *buffer)
{
	char	*newline_pos;
	char	*leftover;
	size_t	leftover_len;

	if (!buffer)
		return (NULL);
	newline_pos = ft_strchr(buffer, '\n');
	if (!newline_pos)
		return (NULL);
	leftover_len = ft_strlen(newline_pos + 1);
	if (leftover_len == 0)
		return (NULL);
	leftover = malloc(leftover_len + 1);
	if (!leftover)
		return (NULL);
	ft_strlcpy(leftover, newline_pos + 1, leftover_len + 1);
	free(buffer);
	return (leftover);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;
	char		*new_buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_and_store(fd, buffer);
	if (!buffer)
		return (NULL);
	line = extract_line(buffer);
	new_buffer = save_leftover(buffer);
	if (!new_buffer)
	{
		free(buffer);
		buffer = NULL;
	}
	else
		buffer = new_buffer;
	if (!line && !buffer)
		return (NULL);
	return (line);
}
