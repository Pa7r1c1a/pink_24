/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   pprint_and_return.c                                     \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/29 23:25:07 by patricia          | `))                  */
/*   Updated: 2024/10/29 23:25:07 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ft_printf.h"

int	pprint_and_return(const char *format, va_list args)
{
	int			i;
	int			printed_chars;
	t_format	fmt;

	fmt = parse_flags(format, &i);
	i = 0;
	printed_chars = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			printf_print(format[i], args, fmt);
		}
		else
		{
			write(1, &format[i], 1);
			printed_chars++;
		}
		i++;
	}
	return (printed_chars);
}
