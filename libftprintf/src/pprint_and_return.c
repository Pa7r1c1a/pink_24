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

#include "../include/ft_printf.h"

int	pprint_and_return(const char *format, va_list args)
{
	int	i;
	int	printed_chars;
	int	check;

	check = 0;
	i = -1;
	printed_chars = 0;
	while (format[++i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			check = printf_print(format[i], args);
			if (check == -1)
				return (-1);
			printed_chars += check;
		}
		else
		{
			if (write(1, &format[i], 1) == -1)
				return (-1);
			printed_chars++;
		}
	}
	return (printed_chars);
}
