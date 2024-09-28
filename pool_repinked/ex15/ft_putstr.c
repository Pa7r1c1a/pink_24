/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patricia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:07:31 by patricia          #+#    #+#             */
/*   Updated: 2024/09/26 14:53:57 by patricia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
*/
