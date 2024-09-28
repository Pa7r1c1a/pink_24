/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_recursive_factorial.c                                \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/29 00:10:52 by patricia          | `))                  */
/*   Updated: 2024/09/29 00:10:52 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

/*void	ft_putnbr(int nb);*/
int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	ft_putnbr(ft_recursive_factorial(12));
	return (0);
}
*/
