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

# define INT_MAX	2147483647
# define INT_MIN	-2147483648

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"
# include <stdio.h>

typedef struct s_format
{
	int	width;
	int	precision;
	int	left_justify;
	int	zero_padding;
	int	space;
	int	plus;
	int	hash;
	int	is_precision;
}	t_format;

t_format	parse_flags(const char *format, int *i);
int			ft_printf(const char *format, ...);
int			pprint_and_return(const char *format, va_list args);
void		printf_print(char specifier, va_list args, t_format format);

int			print_char(char c, t_format format);
int			print_string(char *str, t_format format);
int			print_integer(int n, t_format format);
int			print_unsigned(unsigned int n, t_format format);
int			print_hex(unsigned int n, int uppercase, t_format format);
int			print_pointer(void *ptr, t_format format);

#endif
