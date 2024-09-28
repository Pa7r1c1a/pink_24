/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_strcmp.c                                             \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/29 00:16:17 by patricia          | `))                  */
/*   Updated: 2024/09/29 00:16:17 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

/*
#include <string.h>
#include <unistd.h>

void	ft_putnbr(int nb);
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		write(1, "own: ", 5);
		ft_putnbr(ft_strcmp(argv[1], argv[2]));
		write(1, "\n", 1);
		write(1, "original: ", 10);
		ft_putnbr(strcmp(argv[1], argv[2]));
	}
	write (1, "\n", 1);
	return (0);
}
*/
