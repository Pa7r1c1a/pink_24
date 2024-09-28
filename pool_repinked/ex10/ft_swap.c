/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patricia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:35:03 by patricia          #+#    #+#             */
/*   Updated: 2024/09/23 16:47:37 by patricia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	value_a;
	int	value_b;

	value_a = 2;
	value_b = 4;
	ft_swap(&value_a, &value_b);
	ft_putnbr(value_a);
	ft_putnbr(value_b);
	return (0);
}
