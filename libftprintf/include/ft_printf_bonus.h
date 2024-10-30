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

# include "ft_prinft.h"

t_format	parse_bonus_flags(const char *format, int *i);
int			print_bonus_int(int n, t_format format);
int			print_bonus_hex(unsigned int n, int uppercase, t_format format);

#endif
