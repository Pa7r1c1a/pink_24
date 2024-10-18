/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   own_bzero.c                                             \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/07 17:06:50 by patricia          | `))                  */
/*   Updated: 2024/10/07 17:06:50 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ownlib.h"

void	own_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
/* Or in one line:

void	own_bzero(void *s, size_t)
{
	own_memset(s, 0, n);
}
*/
