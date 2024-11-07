/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   parse_width_bonus.c                                     \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/01 22:26:02 by patricia          | `))                  */
/*   Updated: 2024/11/01 22:26:02 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	parse_width(t_format *fmt, const char *format, int *i)
{
	while (format[*i] >= '0' && format[*i] <= '9')
	{
		fmt->width = (fmt->width * 10) + (format[*i] - '0');
		(*i)++;
	}
}
