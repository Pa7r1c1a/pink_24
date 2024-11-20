/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   get_next_line.h                                         \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/11/10 12:20:52 by patricia          | `))                  */
/*   Updated: 2024/11/10 12:20:52 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t dsize);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);

#endif
