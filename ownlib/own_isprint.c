/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   own_isprint.c                                           \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/07 15:26:11 by patricia          | `))                  */
/*   Updated: 2024/10/07 15:26:11 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ownlib.h"

int	own_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
