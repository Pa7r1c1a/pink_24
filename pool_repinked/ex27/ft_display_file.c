/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patricia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:43:39 by patricia          #+#    #+#             */
/*   Updated: 2024/09/26 23:09:37 by patricia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	ft_display_file(const char *filename)
{
	int	fd;
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	while (1)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == 0)
			break ;
		if (bytes_read == -1)
		{
			write(2, "Cannot read file.\n", 18);
			close(fd);
			return (1);
		}
		write(1, buffer, bytes_read);
	}
	close(fd);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	else
		ft_display_file(argv[1]);
	return (0);
}
