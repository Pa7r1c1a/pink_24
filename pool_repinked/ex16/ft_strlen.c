/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patricia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:56:28 by patricia          #+#    #+#             */
/*   Updated: 2024/09/26 15:04:49 by patricia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	ft_putchar(char c);
void	ft_putnbr(int nb);
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putnbr(ft_strlen(argv[1]));
	ft_putchar('\n');
	return (0);
}
*/
