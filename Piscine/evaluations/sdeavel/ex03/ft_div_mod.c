/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-avel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:50:27 by sde-avel          #+#    #+#             */
/*   Updated: 2023/08/01 22:57:17 by sde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 71;
	b = 8;;
	ft_div_mod(a, b, &div, &mod);
	printf("%d divided by %d\n", a, b);
	printf("Result: %d\n", div);
	printf("Rest: %d", mod);
	return (0);
}*/
