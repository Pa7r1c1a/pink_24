/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_utoa.c                                               \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/03 16:29:14 by patricia          | `))                  */
/*   Updated: 2024/11/03 16:29:14 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "libft.h"

char	*ft_utoa(unsigned int n)
{
	unsigned int	nlen;
	char			*str;
	int				len;

	len = 1;
	nlen = n;
	while (nlen >= 10)
	{
		nlen /= 10;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
