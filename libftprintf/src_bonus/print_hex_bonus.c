/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   print_hex_bonus.c                                       \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/04 15:29:24 by patricia          | `))                  */
/*   Updated: 2024/11/04 15:29:24 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"

int	print_hex_bonus(unsigned int n, int uppercase, t_format format)
{
	char	*str;
	int		len;
	int		i;

	(void)format;
	str = ft_itoa_base(n, 16);
	if (!str)
		return (-1);
	len = ft_strlen(str);
	if (uppercase)
	{
		i = 0;
		while (str[i])
		{
			str[i] = ft_toupper(str[i]);
			i++;
		}
	}
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
