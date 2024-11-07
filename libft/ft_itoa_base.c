/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_itoa_base.c                                          \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/03 17:20:11 by patricia          | `))                  */
/*   Updated: 2024/11/03 17:20:11 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(unsigned int n, int base)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= base;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(unsigned int n, int base)
{
	char	*str;
	char	*digits;
	int		len;

	digits = "0123456789abcdef";
	len = count_digits(n, base);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	else
	{
		while (len > 0)
		{
			str[--len] = digits[n % base];
			n /= base;
		}
	}
	return (str);
}
