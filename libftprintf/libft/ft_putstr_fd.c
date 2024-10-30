/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_putstr_fd.c                                         \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/18 20:47:39 by patricia          | `))                  */
/*   Updated: 2024/10/18 20:47:39 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
int	main(void)
{
	char	*s;
	char	*err;

	s = "all good\n";
	err = "Arrhghfs F*** something went wrong!\n";
	ft_putstr_fd(s, 1);
	ft_putstr_fd(err, 2);
	return (0);
}
*/
