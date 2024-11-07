/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   set_justify_and_padding_bonus.c                         \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/01 22:12:42 by patricia          | `))                  */
/*   Updated: 2024/11/01 22:12:42 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	set_justify_and_padding(t_format *fmt, const char *format, int *i)
{
	while (format[*i] == '-' || format[*i] == '0')
	{
		if (format[*i] == '-')
			fmt->left_justify = 1;
		else if (format[*i] == '0')
			fmt->zero_padding = 1;
		(*i)++;
	}
}
