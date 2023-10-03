/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:26:23 by tomarque          #+#    #+#             */
/*   Updated: 2023/07/30 12:31:00 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	var_div;
	int	var_mod;
	int	*pointer_div;
	int	*pointer_mod;

	a = 42;
	b = 10;
	pointer_div = &var_div;
	pointer_mod = &var_mod;
	ft_div_mod(a, b, pointer_div, pointer_mod);
	printf("Pointer Div: %d\n", *pointer_div);
	printf("Pointer Mod: %d\n", *pointer_mod);
	return (0);
}
*/
