/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 04:15:05 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/06 04:28:53 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}
/*
int	main(int argc, char **argv)
{
	int	nb;
	int	pw;

	if (argc == 3)
	{
		nb = atoi(argv[1]);
		pw = atoi(argv[2]);
		printf("%d", ft_recursive_power(nb, pw));
	}
	return (0);
}
*/
