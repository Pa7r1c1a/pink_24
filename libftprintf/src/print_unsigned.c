/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   print_unsigned.c                                        \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/03 00:25:05 by patricia          | `))                  */
/*   Updated: 2024/11/03 00:25:05 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int	print_unsigned(unsigned int n)
{
	char	*strn;
	int		len;

	strn = ft_utoa(n);
	if (!strn)
		return (-1);
	len = ft_strlen(strn);
	ft_putstr_fd(strn, 1);
	free(strn);
	return (len);
}
