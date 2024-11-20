/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   get_next_line_utils.c                                   \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/10 12:20:27 by patricia          | `))                  */
/*   Updated: 2024/11/10 12:20:27 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	if (dsize > 0)
	{
		while (src[i] && i < (dsize -1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoined;
	char	*p_newstr;
	size_t	total_len;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	total_len = (ft_strlen(s1) + ft_strlen(s2));
	strjoined = malloc(sizeof(char) * (total_len + 1));
	if (strjoined == NULL)
		return (NULL);
	p_newstr = strjoined;
	while (*s1)
		*strjoined++ = *s1++;
	while (*s2)
		*strjoined++ = *s2++;
	*strjoined = '\0';
	return (p_newstr);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
