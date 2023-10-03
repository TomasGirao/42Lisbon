/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:41:19 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/10 17:00:15 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power > 0)
		res = nb * ft_recursive_power(nb, (power - 1));
	return (res);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 0;
	power = 5;
	printf("2 to the power of 8 is %d", ft_recursive_power(nb , power));
}*/
