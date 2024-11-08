/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   set_additional_flags_bonus.c                            \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/01 22:38:41 by patricia          | `))                  */
/*   Updated: 2024/11/01 22:38:41 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"

void	set_additional_flags(t_format *fmt, const char *format, int *i)
{
	while (format[*i] == '+' || format[*i] == ' ' || format[*i] == '#')
	{
		if (format[*i] == '+')
			fmt->plus = 1;
		else if (format[*i] == ' ')
			fmt->space = 1;
		else if (format[*i] == '#')
			fmt->hash = 1;
		(*i)++;
	}
}
