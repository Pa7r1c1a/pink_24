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

#include "ft_printf_bonus.h"

int	printf_print_bonus(char specifier, va_list args, t_format format)
{
	if (specifier == 'c')
		return (print_char_bonus(va_arg(args, int), format));
	else if (specifier == 's')
		return (print_string_bonus(va_arg(args, char *), format));
	else if (specifier == 'd' || specifier == 'i')
		return (print_integer_bonus(va_arg(args, int), format));
	else if (specifier == 'u')
		return (print_unsigned_bonus(va_arg(args, unsigned int), format));
	else if (specifier == 'x')
		return (print_hex_bonus(va_arg(args, unsigned int), 0, format));
	else if (specifier == 'X')
		return (print_hex_bonus(va_arg(args, unsigned int), 1, format));
	else if (specifier == 'p')
		return (print_pointer_bonus(va_arg(args, void *), format));
	else if (specifier == '%')
		return (write(1, "%", 1));
	return (0);
}
