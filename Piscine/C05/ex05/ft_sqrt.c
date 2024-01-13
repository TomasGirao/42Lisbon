/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 04:37:27 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/17 20:07:33 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	long	sq;

	sq = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	else
	{
		while (sq * sq <= nb)
		{
			if (sq * sq == nb)
				return (sq);
			sq++;
		}
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc)
	{
		printf("%i", ft_sqrt(atoi(argv[1])));
	}
	return (0);
}
*/
