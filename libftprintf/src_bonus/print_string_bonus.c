/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   print_string_bonus.c                                    \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/03 00:14:34 by patricia          | `))                  */
/*   Updated: 2024/11/03 00:14:34 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	print_string_bonus(char *str, t_format format)
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
