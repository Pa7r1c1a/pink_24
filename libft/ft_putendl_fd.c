/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_putendl_fd.c                                        \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/18 21:35:56 by patricia          | `))                  */
/*   Updated: 2024/10/18 21:35:56 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	*s;
	char	*err;

	s = "all good";
	err = "Arrhghfs F*** something went wrong!";
	ft_putendl_fd(s, 1);
	ft_putendl_fd(err, 2);
	return (0);
}
*/
