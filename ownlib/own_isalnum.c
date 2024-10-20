/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   own_isalnum.c                                           \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/07 15:14:51 by patricia          | `))                  */
/*   Updated: 2024/10/07 15:14:51 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ownlib.h"

int	own_isalnum(int c)
{
	return (own_isdigit(c) || own_isalpha(c));
}
