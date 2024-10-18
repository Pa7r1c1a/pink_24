/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   own_strnstr.c                                           \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/09 15:25:33 by patricia          | `))                  */
/*   Updated: 2024/10/09 15:25:33 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ownlib.h"

char	*own_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	needle_len = own_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	if (len < needle_len)
		return (NULL);
	while (i <= len - needle_len)
	{
		if (own_strncmp(haystack + i, needle, needle_len) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
