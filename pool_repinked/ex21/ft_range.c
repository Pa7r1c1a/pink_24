/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_range.c                                              \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/29 00:19:15 by patricia          | `))                  */
/*   Updated: 2024/09/29 00:19:15 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*result;
	int	i;
	int	size;

	min = -36;
	max = 112;
	size = max - min;
	result = ft_range(min, max);
	if (result == NULL)
	{
		printf("Memory allocation failed or invalid range.\n");
		return (1);
	}
	while (i < size)
	{
		printf("%d ", result[i]);
		i++;
	}
	printf("\n");
	free(result);
	return (0);
}
*/
