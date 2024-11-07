/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   print_string.c                                          \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/27 14:31:26 by patricia          | `))                  */
/*   Updated: 2024/10/27 14:31:26 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int	print_string(char *str)
{
	int	len;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	if (write(1, str, len) == -1)
		return (-1);
	return (len);
}
