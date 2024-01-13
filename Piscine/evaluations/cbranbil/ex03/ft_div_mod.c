/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbranbil <cbranbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:51:25 by cbranbil          #+#    #+#             */
/*   Updated: 2023/07/31 19:20:37 by cbranbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int main(void)
{
	int a;
	int b;
	int div;
	int mod;
	a = 60;
	b = 5;
	div = 0;
	mod = 0;
	printf("result div antes %d \n rest div antes %d \n", div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("resultado divisao %d \n rest divisao %d", div, mod);
	return(0);
}
*/
