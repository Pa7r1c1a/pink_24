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

#include "ft_printf.h"

void	printf_print(char specifier, va_list args, t_format format)
{
	if (specifier == 'c')
		print_char(va_arg(args, int), format);
	else if (specifier == 's')
		print_string(va_arg(args, char *), format);
	else if (specifier == 'd' || specifier == 'i')
		print_integer(va_arg(args, int), format);
	else if (specifier == 'u')
		print_unsigned(va_arg(args, unsigned int), format);
	else if (specifier == 'x')
		print_hex(va_arg(args, unsigned int), 0, format);
	else if (specifier == 'X')
		print_hex(va_arg(args, unsigned int), 1, format);
	else if (specifier == 'p')
		print_pointer(va_arg(args, void *), format);
	else if (specifier == '%')
		write(1, "%", 1);
}
