/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   print_pointer.c                                         \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/03 00:27:03 by patricia          | `))                  */
/*   Updated: 2024/11/03 00:27:03 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int	print_pointer(void *ptr)
{
	char	*str;
	int		len;
	int		total_len;

	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	str = ft_ultoa_base((unsigned long)ptr, 16);
	if (!str)
		return (-1);
	ft_putstr_fd("0x", 1);
	total_len = 2;
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	total_len += len;
	free(str);
	return (total_len);
}
