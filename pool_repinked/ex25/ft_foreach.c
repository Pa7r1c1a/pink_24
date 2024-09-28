/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_foreach.c                                            \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/28 23:30:27 by patricia          | `))                  */
/*   Updated: 2024/09/28 23:30:27 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

/*
void	ft_putnbr(int nb);
*/
void	ft_foreach(int *tab, int lenght, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < lenght)
	{
		f(tab[i]);
		i++;
	}
}
/*
int	main(void)
{
	int	tab[5];

	tab[0] = 12;
	tab[1] = 24;
	tab[2] = 46;
	tab[3] = 38;
	tab[4] = 100;
	ft_foreach(tab, 5, &ft_putnbr);
	return (0);
}
*/
