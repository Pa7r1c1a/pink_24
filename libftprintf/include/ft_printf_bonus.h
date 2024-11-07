/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_printf_bonus.h                                       \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/24 15:08:57 by patricia          | `))                  */
/*   Updated: 2024/10/24 15:08:57 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include "ft_printf.h"
# define INT_MAX	2147483646
# define INT_MIN	-2147483649

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

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

t_format	parse_flags_bonus(const char *format, int *i);
void		set_justify_and_padding(t_format *fmt, const char *format, int *i);
void		parse_width(t_format *fmt, const char *format, int *i);
void		parse_precision(t_format *fmt, const char *format, int *i);
void		set_additional_flags(t_format *fmt, const char *format, int *i);

int			printf_print_bonus(char specifier, va_list args, t_format format);

int			print_char_bonus(int c, t_format format);
int			print_string_bonus(char *str, t_format format);
int			print_integer_bonus(int n, t_format format);
int			print_unsigned_bonus(unsigned int n, t_format format);
int			print_hex_bonus(unsigned int n, int uppercase, t_format format);
int			print_pointer_bonus(void *ptr, t_format format);

#endif
