/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   own_calloc.c                                            \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/09 21:16:23 by patricia          | `))                  */
/*   Updated: 2024/10/09 21:16:23 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ownlib.h"

void	*own_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (own_memset(ptr, 0, nmemb * size));
}
