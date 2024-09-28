/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patricia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:06:37 by patricia          #+#    #+#             */
/*   Updated: 2024/09/26 15:23:47 by patricia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
#include <unistd.h>

void	ft_putnbr(int nb);
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		write(1, "own: ", 5);
		ft_putnbr(ft_strcmp(argv[1], argv[2]));
		write(1, "\n", 1);
		write(1, "original: ", 10);
		ft_putnbr(strcmp(argv[1], argv[2]));
	}
	write (1, "\n", 1);
	return (0);
}
*/
