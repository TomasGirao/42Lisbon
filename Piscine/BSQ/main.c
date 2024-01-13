/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 05:02:51 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/14 05:02:53 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h" //get our library of func

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 1)
	{
		// read standard output
		return (0);
	}
	else if (ac > 1)
	{
		while (ac > i)
		{
			// Calls function to put the squares
			i++;
		}
	}
	return (0);
}
