/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   print_char_bonus.c                                      \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/03 00:12:15 by patricia          | `))                  */
/*   Updated: 2024/11/03 00:12:15 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	print_char_bonus(int c, t_format format)
{
	(void)format;
	return (write(1, &c, 1));
}
