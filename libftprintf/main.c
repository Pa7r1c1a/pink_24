/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   main.c                                                  \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/10/30 18:38:51 by patricia          | `))                  */
/*   Updated: 2024/10/30 18:38:51 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	main(void)
{
	ft_printf("Hello, %s!\n", "World");
	ft_printf("Character: %c\n", 'P');
	ft_printf("Decimal: %d\n", 42);
	ft_printf("Hex Lower: %x\n", 255);
	ft_printf("Hex Upper: %X\n", 255);
	ft_printf("Pointer: %p\n", main);
	return (0);
}
