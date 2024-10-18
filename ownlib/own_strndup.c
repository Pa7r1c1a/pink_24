/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   own_strndup.c                                           \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/15 18:50:07 by patricia          | `))                  */
/*   Updated: 2024/10/15 18:50:07 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ownlib.h"

char	*own_strndup(const char *s, size_t n)
{
	char	*dup;
	size_t	len;

	if (s == NULL)
		return (NULL);
	len = own_strlen(s);
	if (n < len)
		len = n;
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	own_strlcpy(dup, s, len + 1);
	return (dup);
}
