/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:38:25 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/04 14:41:50 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	if (argc)
	{
		while (a < argc)
		{
			while (argv[a][i])
			{
				write(1, &argv[a][i], 1);
				i++;
			}
			write(1, "\n", 1);
			i = 0;
			a++;
		}
	}
	return (0);
}
