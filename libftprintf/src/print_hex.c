/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   print_hex.c                                             \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/03 00:17:59 by patricia          | `))                  */
/*   Updated: 2024/11/03 00:17:59 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/ft_printf.h"

int	print_hex(unsigned int n, int uppercase)
{
	char	*str;
	int		len;
	int		i;

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
