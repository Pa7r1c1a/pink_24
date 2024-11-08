/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   printf_print.c                                          \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/29 18:54:37 by patricia          | `))                  */
/*   Updated: 2024/10/29 18:54:37 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	printf_print(char specifier, va_list args)
{
	if (specifier == 'c')
		return (print_char(va_arg(args, int)));
	else if (specifier == 's')
		return (print_string(va_arg(args, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (print_integer(args));
	else if (specifier == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	else if (specifier == 'x')
		return (print_hex(va_arg(args, unsigned int), 0));
	else if (specifier == 'X')
		return (print_hex(va_arg(args, unsigned int), 1));
	else if (specifier == 'p')
		return (print_pointer(va_arg(args, void *)));
	else if (specifier == '%')
		return (write(1, "%", 1));
	return (0);
}
