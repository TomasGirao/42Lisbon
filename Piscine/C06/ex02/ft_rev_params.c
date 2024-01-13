/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:42:23 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/08 15:27:46 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	i = 0;
	a = argc - 1;
	if (argc > 1)
	{
		while (a > 0)
		{
			while (argv[a][i] && argc)
			{
				write(1, &argv[a][i], 1);
				i++;
			}
			write(1, "\n", 1);
			i = 0;
			a--;
		}
	}
	return (0);
}
