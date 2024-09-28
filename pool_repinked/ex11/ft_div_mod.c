/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_div_mod.c                                            \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/29 00:08:13 by patricia          | `))                  */
/*   Updated: 2024/09/29 00:08:13 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

/*void	ft_putnbr(int nb);
void	ft_putchar(char c);*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
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
*/
