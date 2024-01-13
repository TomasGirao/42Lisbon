/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:28:23 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/12 19:43:26 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb != 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

int	main(void)
{
	unsigned int	x;
	unsigned int	y;

	x = 3;
	y = 4;
	printf("the factorial of x is: %d\n", ft_iterative_factorial(x));
	printf("the factorial of y is: %d\n", ft_iterative_factorial(y));
}
