/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-avel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:51:33 by sde-avel          #+#    #+#             */
/*   Updated: 2023/08/01 22:44:10 by sde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a;
	int	b;
	
	a = 24;
	b = 42;
	printf("Before: A = %d, B = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After: A = %d, B = %d\n", a, b);
	return (0);
}*/
