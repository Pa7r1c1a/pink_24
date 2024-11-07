/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   print_char.c                                            \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/25 20:36:26 by patricia          | `))                  */
/*   Updated: 2024/10/25 20:36:26 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	print_char(int c)
{
	return (write(1, &c, 1));
}
