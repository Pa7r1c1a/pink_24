/* ************************************************************************** */
/*                                                            .-.             */
/*                                                           ((`-)            */
/*   ft_print_params.c                                       \\               */
/*                                                    .="""=._))              */
/*   By: patricia <**@gmail.com>                     /  .*    .'              */
/*                                                 `  /|                      */
/*   				                     /_|__                    */
/*   Created: 2024/09/29 00:16:53 by patricia          | `))                  */
/*   Updated: 2024/09/29 00:16:53 by patricia          |                      */
/*                                               PINK -"== 24           🦩    */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	arg_i;
	int	char_i;

	arg_i = 1;
	if (argc >= 2)
	{
		while (arg_i <= argc -1)
		{
			char_i = 0;
			while (argv[arg_i][char_i])
			{
				ft_putchar(argv[arg_i][char_i]);
				char_i++;
			}
			ft_putchar('\n');
			arg_i++;
		}
	}
	return (0);
}
