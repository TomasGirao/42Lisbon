/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:31:57 by tomarque          #+#    #+#             */
/*   Updated: 2023/07/30 12:36:35 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}
/*
int	main(void)
{
	int	var_a;
	int	var_b;
	int	*p_a;
	int	*p_b;

	var_a = 53;
	var_b = 10;
	p_a = &var_a;
	p_b = &var_b;
	ft_ultimate_div_mod(p_a, p_b);
	printf("Pointer Div: %d\n", *p_a);
	printf("Pointer Mod: %d\n", *p_b);
}
*/
