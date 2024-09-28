/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patricia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:58:29 by patricia          #+#    #+#             */
/*   Updated: 2024/09/23 17:11:20 by patricia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	value_a;
	int	value_b;
	int	div;
	int	mod;

	value_a = 20;
	value_b = 3;
	div = 0;
	mod = 0;
	ft_div_mod(value_a, value_b, &div, &mod);
	ft_putnbr(div);
	ft_putchar('\n');
	ft_putnbr(mod);
	ft_putchar('\n');
	return (0);
}
