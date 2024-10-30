/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   print_string.c                                          \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/27 14:31:26 by patricia          | `))                  */
/*   Updated: 2024/10/27 14:31:26 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *str, t_format format)
{
	int	len;

	(void)format;
	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	if (write(1, str, len) == -1)
		return (-1);
	return (len);
}
