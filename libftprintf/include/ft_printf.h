/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_printf.h                                             \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/23 18:16:12 by patricia          | `))                  */
/*   Updated: 2024/10/23 18:16:12 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define INT_MAX	2147483646
# define INT_MIN	-2147483649

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>

int			ft_printf(const char *format, ...);

int			pprint_and_return(const char *format, va_list args);
int			printf_print(char specifier, va_list args);

int			print_char(int c);
int			print_string(char *str);
int			print_integer(va_list args);
int			print_unsigned(unsigned int n);
int			print_hex(unsigned int n, int uppercase);
int			print_pointer(void *ptr);

#endif
