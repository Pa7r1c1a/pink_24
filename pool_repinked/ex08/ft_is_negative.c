/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_is_negative.c                                        \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/29 00:03:27 by patricia          | `))                  */
/*   Updated: 2024/09/29 00:03:27 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

void	ft_putchar(char c);
/*int		ft_atoi(char *nptr);*/

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}
/*
int	main(int argc, char *argv[])
{
	int	n;

	n = ft_atoi(argv[1]);
	if (argc >= 1)
		ft_is_negative(n);
	return (0);
}
*/
