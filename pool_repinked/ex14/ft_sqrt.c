/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patricia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:27:22 by patricia          #+#    #+#             */
/*   Updated: 2024/09/26 21:32:29 by patricia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int	ft_sqrt(int nb)
{	
	int	square_root;
	
	square_root = 0;
	if (nb <= 0 || nb > 2147395600)
		return (0);
	while (square_root * square_root <= nb)
	{
		if (square_root * square_root == nb)
			return (square_root);
		square_root++;
	}
	return (0);
}

int	main(void)
{
	ft_putnbr(ft_sqrt(2147395600));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(2147395400));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(2147483647));
	ft_putchar('\n');
	return (0);
}
