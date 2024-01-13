/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:00:15 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/09 18:22:11 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb != 1)
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 12;
	y = 5;
	printf("the factorial of x is: %d\n", ft_recursive_factorial(x));
	printf("the factorial of y is: %d\n", ft_recursive_factorial(y));
}*/
