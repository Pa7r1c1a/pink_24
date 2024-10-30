/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_memchr.c                                            \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/12 17:20:44 by patricia          | `))                  */
/*   Updated: 2024/10/12 17:20:44 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		c_to_search;

	ptr = (const unsigned char *)s;
	c_to_search = (unsigned char)c;
	while (n--)
	{
		if (*ptr == c_to_search)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
