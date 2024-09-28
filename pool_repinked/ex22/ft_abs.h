/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_abs.h                                                \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/29 00:20:01 by patricia          | `))                  */
/*   Updated: 2024/09/29 00:20:01 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	ft_abs(int Value)
{
	if (Value < 0)
		return (-Value);
	else
		return (Value);
}
#endif
