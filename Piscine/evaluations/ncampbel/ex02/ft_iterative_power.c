/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:22:46 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/09 18:40:22 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (power != 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 8;
	printf("2 powered to the 8 is %d", ft_iterative_power(nb, power));
}*/
