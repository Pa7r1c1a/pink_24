/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   own_strjoin.c                                           \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/14 21:04:56 by patricia          | `))                  */
/*   Updated: 2024/10/14 21:04:56 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ownlib.h"

char	*own_strjoin(char const *s1, char const *s2)
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
	total_len = (own_strlen(s1) + own_strlen(s2));
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
/*
	Don't forget to free the memory allocated 
	for the new string when you call the function!!
*/
