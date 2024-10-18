/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   own_split.c                                             \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/15 18:23:52 by patricia          | `))                  */
/*   Updated: 2024/10/15 18:23:52 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ownlib.h"

static size_t	count_substrings(const char *s, char delimiter)
{
	size_t	count;
	int		in_substring;

	count = 0;
	in_substring = 0;
	while (*s)
	{
		if (*s != delimiter && in_substring == 0)
		{
			in_substring = 1;
			count++;
		}
		else if (*s == delimiter)
			in_substring = 0;
		s++;
	}
	return (count);
}

static void	free_result(char **result, int i)
{
	while (i >= 0)
	{
		free(result[i]);
		i--;
	}
	free(result);
}

static char	**init_result(char **result, const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (s[len] != c && s[len] != '\0')
				len++;
			result[i] = own_strndup(s, len);
			if (!result[i])
			{
				free_result(result, i);
				return (NULL);
			}
			i++;
			s += len;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}

char	**own_split(char const *s, char c)
{
	char	**result;
	size_t	substr_count;

	if (!s)
		return (NULL);
	substr_count = count_substrings(s, c);
	result = malloc(sizeof(char *) * (substr_count + 1));
	if (!result)
		return (NULL);
	return (init_result(result, s, c));
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char **result;

	if (argc == 2)
	{
		result = own_split(argv[1], ',');
		while (*result)
		{
			printf("%s\n", *result);
			result++;
		}
	}
	return (0);
}
*/
