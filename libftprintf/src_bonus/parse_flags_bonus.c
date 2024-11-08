/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   parse_flags.c                                           \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/29 21:56:54 by patricia          | `))                  */
/*   Updated: 2024/10/29 21:56:54 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"

t_format	parse_flags_bonus(const char *format, int *i)
{
	t_format	fmt;

	fmt.width = 0;
	fmt.precision = -1;
	fmt.left_justify = 0;
	fmt.zero_padding = 0;
	fmt.space = 0;
	fmt.plus = 0;
	fmt.hash = 0;
	fmt.is_precision = 0;
	set_justify_and_padding(&fmt, format, i);
	parse_width(&fmt, format, i);
	parse_precision(&fmt, format, i);
	set_additional_flags(&fmt, format, i);
	return (fmt);
}
