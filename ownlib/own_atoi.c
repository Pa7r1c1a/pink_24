/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   own_atoi.c                                              \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/08 21:49:43 by patricia          | `))                  */
/*   Updated: 2024/10/08 21:49:43 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ownlib.h"

int	own_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (own_isdigit(nptr[i]))
	{
		result = ((result * 10) + (nptr[i] - 48));
		i++;
	}
	return (result * sign);
}
