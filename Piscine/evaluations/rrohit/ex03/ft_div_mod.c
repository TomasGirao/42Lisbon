/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrohit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:29:36 by rrohit          #+#    #+#             */
/*   Updated: 2023/08/05 21:16:40 by rrohit           ###   ########.fr       */
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
	int	n1;
	int	n2;
	int	div;
	int	mod;

	n1 = 11;
	n2 = 5;
	ft_div_mod(n1, n2, &div, &mod);
	printf("%d\n%d", div, mod);
}
*/
