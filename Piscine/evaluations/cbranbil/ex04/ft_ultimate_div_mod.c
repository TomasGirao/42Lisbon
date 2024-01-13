/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbranbil <cbranbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:18:11 by cbranbil          #+#    #+#             */
/*   Updated: 2023/08/02 12:07:30 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rest;

	if (b != 0)
	{
		div = a / b;
		rest = a % b;
		a = div;
		b = rest;
	}
}

int main(void)
{
	int	a;
	int b;
	a = 15;
	b = 9;

	{
		ft_ultimate_div_mod(&a, &b);
		printf("resultado da divisao %d \n resto da divisao %d", a, b);
	}
	return(0);

}
