/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_ultoa_base.c                                         \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/03 22:45:52 by patricia          | `))                  */
/*   Updated: 2024/11/03 22:45:52 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits_ul(unsigned long n, int base)
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

char	*ft_ultoa_base(unsigned long n, int base)
{
	char	*str;
	char	*digits;
	int		len;

	digits = "0123456789abcdef";
	len = count_digits_ul(n, base);
	str = malloc(sizeof(char) *(len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (len > 0 && n > 0)
	{
		str[--len] = digits[n % base];
		n /= base;
	}
	return (str);
}
