/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_count_if.c                                           \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/29 00:37:33 by patricia          | `))                  */
/*   Updated: 2024/09/29 00:37:33 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}
/*
int	contains_d_x_c_k(char *str)
{
	while (*str)
	{
		if (*str == 'd' && *(str + 2) == 'c' && *(str + 3) == 'k')
			return (1);
		str++;
	}
	return (0);
}

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(void)
{
	char	*tab[7];
	int		i;
	int		result;

	tab[0] = "duck";
	tab[1] = "dick";
	tab[2] = "duckies";
	tab[3] = "dock";
	tab[4] = "socks";
	tab[5] = "suck";
	tab[6] = NULL;
	i = 0;
	result = ft_count_if(tab, contains_d_x_c_k);
	ft_putstr("the number of words containing d*ck is: ");
	ft_putstr(&(char){result % 10 + 48});
	write(1, "\n\n", 2);
	while (tab[i] != NULL)
	{
		ft_putstr(tab[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
*/
