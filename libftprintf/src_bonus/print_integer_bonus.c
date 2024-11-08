/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   print_integer_bonus.c                                   \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/04 15:22:17 by patricia          | `))                  */
/*   Updated: 2024/11/04 15:22:17 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"
#include "../libft/libft.h"

int	print_integer_bonus(int n, t_format format)
{
	char	*strn;
	int		len;

	(void)format;
	strn = ft_itoa(n);
	if (!strn)
		return (-1);
	len = ft_strlen(strn);
	ft_putstr_fd(strn, 1);
	free(strn);
	return (len);
}
