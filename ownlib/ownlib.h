/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ownlib.h                                                \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/18 21:23:59 by patricia          | `))                  */
/*   Updated: 2024/10/18 21:23:59 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#ifndef OWNLIB_H
# define OWNLIB_H

# define MAX_DUPLICATE_SIZE 1024

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

int		own_isalnum(int c);
int		own_isalpha(int c);
int		own_isdigit(int c);
int		own_isprint(int c);
int		own_isascii(int c);
size_t	own_strlen(const char *s);
void	*own_memset(void *s, int c, size_t n);
void	own_bzero(void *s, size_t n);
void	*own_memcpy(void *dest, const void *src, size_t n);
void	*own_memmove(void *dest, const void *src, size_t n);
size_t	own_strlcpy(char *dest, const char *src, size_t dsize);
size_t	own_strlcat(char *dest, const char *src, size_t dsize);
int		own_toupper(int c);
int		own_tolower(int c);
char	*own_strchr(const char *s, int c);
char	*own_strrchr(const char *s, int c);
int		own_strncmp(const char *s1, const char *s2, size_t n);
int		own_memcmp(const void *s1, const void *s2, size_t n);
void	*own_memchr(const void *s, int c, size_t n);
char	*own_strnstr(const char *haystack, const char *needle, size_t len);
int		own_atoi(const char *nptr);
void	*own_calloc(size_t nmemb, size_t size);
char	*own_strdup(const char *s);
char	*own_strndup(const char *s, size_t n);
char	*own_substr(char const *s, unsigned int start, size_t len);
char	*own_strjoin(char const *s1, char const *s2);
char	*own_strtrim(char const *s1, char const *set);
char	**own_split(char const *s, char c);
char	*own_revstr(char *str, int len);
char	*own_itoa(int n);
char	*own_strmapi(char const *s, char (*f)(unsigned int, char));
void	own_striteri(char *s, void (*f)(unsigned int i, char*));
void	own_putchar_fd(char c, int fd);
void	own_putstr_fd(char *s, int fd);
void	own_putendl_fd(char *s, int fd);
void	own_putnbr_fd(int n, int fd);

#endif
