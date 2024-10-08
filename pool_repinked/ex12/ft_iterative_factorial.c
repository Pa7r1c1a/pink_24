/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_iterative_factorial.c                                \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/29 00:09:08 by patricia          | `))                  */
/*   Updated: 2024/09/29 00:09:08 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

/* void	ft_putnbr(int nb);
void	ft_putchar(char c); */
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	ft_putnbr(ft_iterative_factorial(0));
	ft_putchar('\n');
	return (0);
}
*/
