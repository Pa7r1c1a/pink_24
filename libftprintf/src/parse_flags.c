/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   parse_flags.c                                           \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/29 21:56:54 by patricia          | `))                  */
/*   Updated: 2024/10/29 21:56:54 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "ft_printf.h"

t_format	parse_flags(const char *format, int *i)
{
	t_format	fmt;

	fmt.width = 0;
	fmt.precision = -1;
	fmt.left_justify = 0;
	fmt.zero_padding = 0;
	fmt.space = 0;
	fmt.plus = 0;
	fmt.hash = 0;
	fmt.is_precision = 0;
	set_justify_and_padding(&fmt, format, i);
	parse_width(&fmt, format, i);
	parse_precision(&fmt, format, i);
	set_additional_flags(&fmt, format, i);
	return (fmt);
}

void	set_justify_and_padding(t_format fmt, const char *format, int *i)
{
	while (format[*i] == '-' || format[*i] == '0')
	{
		if (format[*i] == '-')
			fmt->left_justify = 1;
		else if (format[*i] == '0')
			fmt->zero_padding = 1;
		(*i)++;
	}
}

void	parse_width(t_format *fmt, const char *format, int *i)
{
	while (format[*i] >= '0' && format[*i] <= '9')
	{
		fmt->width = (fmt->width * 10) + (format[*i] - '0');
		(*i)++;
	}
}

void	parse_precision(t_format *fmt, const char *format, int *i)
{
	if (format[*i] == '.')
	{
		fmt->is_precision = 1;
		fmt->precision = 0;
		(*i)++;
		while (format[*i] >= '0' && format[*i] <= '9')
		{
			fmt->precision = (fmt->precision * 10) + (format[*i] - '0');
			(*i)++;
		}
	}
}

void	set_additional_flags(t_format *fmt, const char *format, int *i)
{
	while (format[*i] == '+' || format[*i] == ' ' || format[*i] == '#')
	{
		if (format[*i] == '+')
			fmt->plus = 1;
		else if (format[*i] == ' ')
			fmt->space = 1;
		else if (format[*i] == '#')
			fmt->hash = 1;
		(*i)++;
	}
}
