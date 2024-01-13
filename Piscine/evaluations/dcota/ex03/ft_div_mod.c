/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcota-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:27:25 by dcota-pa          #+#    #+#             */
/*   Updated: 2023/07/30 10:40:34 by dcota-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	temp_a;
	int	temp_b;

	temp_a = a;
	temp_b = b;
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int div;
	int mod;

	ft_div_mod(42,2,&div,&mod);
	printf("%d", div);
	printf("%d", mod);
		
	return (0);
}*/
