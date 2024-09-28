/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_strdup.c                                             \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/29 00:18:28 by patricia          | `))                  */
/*   Updated: 2024/09/29 00:18:28 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <string.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
	//	ft_strdup(argv[1]);
		write(1, "own dup: ", 9); 
		ft_putstr(ft_strdup(argv[1]));
		write(1, "\noriginal strdup: ", 18);
		ft_putstr(strdup(argv[1]));
		write(1, "\n", 1);
	}	
	return (0);
}
*/
