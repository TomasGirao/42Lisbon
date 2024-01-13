/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:48:10 by tomarque          #+#    #+#             */
/*   Updated: 2023/07/30 19:00:39 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	ft_atoi(char *strg)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (strg[i] != '\0' && strg[i] >= 48 && strg[i] <= 57)
	{
		result *= 10;
		result += strg[i] - 48;
		i++;
	}
	return (result);
}

int	main(int argc, char *argv[])
{
	int	x_argv;
	int	y_argv;

	x_argv = ft_atoi(argv[1]);
	y_argv = ft_atoi(argv[2]);
	if (argc == 3)
	{
		rush(x_argv, y_argv);
	}
	return (0);
}
