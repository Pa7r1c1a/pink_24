/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   own_putendl_fd.c                                        \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/18 21:35:56 by patricia          | `))                  */
/*   Updated: 2024/10/18 21:35:56 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ownlib.h"

void	own_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, own_strlen(s));
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	*s;
	char	*err;

	s = "all good";
	err = "Arrhghfs F*** something went wrong!";
	own_putendl_fd(s, 1);
	own_putendl_fd(err, 2);
	return (0);
}
*/
