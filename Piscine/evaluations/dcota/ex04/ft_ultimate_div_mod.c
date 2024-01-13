/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcota-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:14:15 by dcota-pa          #+#    #+#             */
/*   Updated: 2023/07/30 10:41:20 by dcota-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = *a / *b;
	*b = temp_a % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("division = %d", a);
	printf("leftover = %d", b);
	return (0);
}*/
