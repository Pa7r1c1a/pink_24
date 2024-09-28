/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_putstr.c                                             \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/29 00:14:24 by patricia          | `))                  */
/*   Updated: 2024/09/29 00:14:24 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
*/
