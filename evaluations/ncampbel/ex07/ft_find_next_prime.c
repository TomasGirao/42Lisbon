/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:14:49 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/12 19:52:26 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);
int	ft_find_prime(int nb);

int	ft_find_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_find_prime(nb) == 0)
			nb++;
		else
			return (nb);
	}
	return (0);
}

int	main(void)
{
	int	i = 2147483647;
	int	j = 14;
	int	k = 938294;

	printf("%d, %d, %d", ft_find_next_prime(i), 
		ft_find_next_prime(j),ft_find_next_prime(k));
}
