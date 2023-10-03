/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:16:54 by tomarque          #+#    #+#             */
/*   Updated: 2023/07/30 12:25:13 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
/*
int	main(void)
{
	int	*pointer_a;
	int	*pointer_b;
	int	a;
	int	b;

	a = 25;
	b = 81;
	pointer_a = &a;
	pointer_b = &b;
	ft_swap(pointer_a, pointer_b);
	printf("Pointer A: %d\n", *pointer_a);
	printf("Pointer B: %d\n", *pointer_b);
	return (0);
}
*/
