/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_print_alphabet.c                                     \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/29 00:00:39 by patricia          | `))                  */
/*   Updated: 2024/09/29 00:00:39 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
		ft_putchar(letter++);
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
