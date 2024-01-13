/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-avel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:01:53 by sde-avel          #+#    #+#             */
/*   Updated: 2023/08/02 18:23:50 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = temp_a / *b;
	*b = temp_a % *b;
}

int	main(void)
{
	int	a;
	int	b;

	a = 91;
	b = 10;
	printf("%d divided by %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Restult: %d\n", a);
	printf("Rest: %d", b);
	return (0);
}
