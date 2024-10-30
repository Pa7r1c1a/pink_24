/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_strrchr.c                                           \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/11 20:31:15 by patricia          | `))                  */
/*   Updated: 2024/10/11 20:31:15 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
// index based version starting from the end:

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		//	Another way of returning the address of the occurrence is like this:
		//	return ((char *)&s[i]);
		i--;
	}
	// no need of if (char)c == '\0' It's already done in the while loop
	return (NULL);
}
*/
