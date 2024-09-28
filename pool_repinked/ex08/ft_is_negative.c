/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patricia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:53:25 by patricia          #+#    #+#             */
/*   Updated: 2024/09/23 15:53:14 by patricia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_atoi(char *nptr);

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}

int	main(int argc, char *argv[])
{
	int	n;

	n = ft_atoi(argv[1]);
	if (argc >= 1)
		ft_is_negative(n);
	return (0);
}
