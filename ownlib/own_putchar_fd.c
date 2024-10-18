/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   own_putchar_fd.c                                        \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/18 20:15:32 by patricia          | `))                  */
/*   Updated: 2024/10/18 20:15:32 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ownlib.h"

void	own_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	own_putchar_fd('A', 1);
	own_putchar_fd('B', 2);
	return (0);
}
*/
