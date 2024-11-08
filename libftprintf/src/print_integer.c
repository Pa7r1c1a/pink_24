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

#include "../libft/libft.h"
#include "../include/ft_printf.h"

int	print_integer(va_list args)
{
	char	*strn;
	int		len;
	int		n;

	n = va_arg(args, int);
	strn = ft_itoa(n);
	if (!strn)
		return (-1);
	len = ft_strlen(strn);
	write(1, strn, len);
	return (free(strn), len);
}
