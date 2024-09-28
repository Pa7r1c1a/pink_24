/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_swap.c                                               \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/29 00:07:31 by patricia          | `))                  */
/*   Updated: 2024/09/29 00:07:31 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

/*void	ft_putnbr(int nb);*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
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
*/
