/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   pink_24/libftprintf/libft/ft_strlen.c                   \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/27 15:17:43 by patricia          | `))                  */
/*   Updated: 2024/10/27 15:17:43 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
