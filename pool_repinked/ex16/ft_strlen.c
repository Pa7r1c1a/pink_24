/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_strlen.c                                             \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/29 00:15:06 by patricia          | `))                  */
/*   Updated: 2024/09/29 00:15:06 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

/*
void	ft_putchar(char c);
void	ft_putnbr(int nb);
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putnbr(ft_strlen(argv[1]));
	ft_putchar('\n');
	return (0);
}
*/
