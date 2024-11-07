/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_strlcat.c                                            \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/23 17:41:31 by patricia          | `))                  */
/*   Updated: 2024/10/23 17:41:31 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (dest_len >= dsize)
		return (dsize + src_len);
	ft_strlcpy(dest + dest_len, src, dsize - dest_len);
	return (dest_len + src_len);
}
