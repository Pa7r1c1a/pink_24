/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   own_putnbr_fd.c                                         \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/18 21:52:04 by patricia          | `))                  */
/*   Updated: 2024/10/18 21:52:04 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ownlib.h"

void	own_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
		own_putnbr_fd(n / 10, fd);
	write(fd, &(char){n % 10 + '0'}, 1);
}
/*
int	main(void)
{
	own_putnbr_fd(24, 1);
	write(1, "\n", 1);
	own_putnbr_fd(-2147483648, 2);
	write(2, "\n", 1);
	return (0);
}
*/
