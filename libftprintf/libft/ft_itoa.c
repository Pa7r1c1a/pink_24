/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_itoa.c                                              \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/17 17:04:42 by patricia          | `))                  */
/*   Updated: 2024/10/17 17:04:42 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*result;

	sign = (n < 0);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = count_digits(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	if (sign)
	{
		result[0] = '-';
		n *= -1;
	}
	while (--len >= sign)
	{
		result[len] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int		num;
	char	*str;

	num = -244824;
	str = ft_itoa(num);
	if (str)
	{
		printf("Integer to string: %s\n", str);
		free(str);
	}
	return (0);
}
*/
