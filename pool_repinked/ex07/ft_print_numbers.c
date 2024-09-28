/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_print_numbers.c                                      \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/29 00:02:32 by patricia          | `))                  */
/*   Updated: 2024/09/29 00:02:32 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	i;

	i = '0';
	while (i <= '9')
		ft_putchar(i++);
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
