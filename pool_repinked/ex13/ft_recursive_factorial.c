/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patricia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 22:37:00 by patricia          #+#    #+#             */
/*   Updated: 2024/09/23 23:33:53 by patricia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	ft_putnbr(ft_recursive_factorial(12));
	return (0);
}
