/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   parse_precision_bonus.c                                 \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/01 22:26:51 by patricia          | `))                  */
/*   Updated: 2024/11/01 22:26:51 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"

void	parse_precision(t_format *fmt, const char *format, int *i)
{
	if (format[*i] == '.')
	{
		fmt->is_precision = 1;
		fmt->precision = 0;
		(*i)++;
		while (ft_isdigit(format[*i]))
		{
			fmt->precision = (fmt->precision * 10) + (format[*i] - '0');
			(*i)++;
		}
	}
}
