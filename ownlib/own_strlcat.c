/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   own_strlcat.c                                           \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/08 16:55:11 by patricia          | `))                  */
/*   Updated: 2024/10/08 16:55:11 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ownlib.h"

size_t	own_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;
	size_t	available_space;

	src_len = own_strlen(src);
	dest_len = own_strlen(dest);
	i = 0;
	if (dest_len >= dsize)
		return (dsize + src_len);
	available_space = dsize - dest_len - 1;
	while (src[i] && i < available_space)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
