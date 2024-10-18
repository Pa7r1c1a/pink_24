/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   own_memset.c                                            \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/07 15:47:53 by patricia          | `))                  */
/*   Updated: 2024/10/07 15:47:53 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ownlib.h"

void	*own_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	c_byte;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	c_byte = (unsigned char)c;
	while (i < n)
	{
		ptr[i] = c_byte;
		i++;
	}
	return (s);
}
