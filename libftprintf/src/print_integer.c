/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   print_integer.c                                         \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/03 00:24:21 by patricia          | `))                  */
/*   Updated: 2024/11/03 00:24:21 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int	print_integer(int n)
{
	char	*strn;
	int		len;

	strn = ft_itoa(n);
	if (!strn)
		return (-1);
	len = ft_strlen(strn);
	ft_putstr_fd(strn, 1);
	free(strn);
	return (len);
}
