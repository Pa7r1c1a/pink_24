/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   main.c                                                  \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/29 00:23:07 by patricia          | `))                  */
/*   Updated: 2024/09/29 00:23:07 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("x = %d \ny = %d\n", point.x, point.y);
	return (0);
}
