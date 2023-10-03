/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:42:37 by tomarque          #+#    #+#             */
/*   Updated: 2023/07/27 11:44:58 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putint(int numb, int max)
{
	char	unidade;
	char	dezena;

	if (numb <= 9)
	{
		unidade = numb + 48;
		ft_putchar('0', unidade);
	}
	else if (numb <= max)
	{
		unidade = (numb % 10) + 48;
		dezena = (numb / 10) + 48;
		ft_putchar(dezena, unidade);
	}
}

void	ft_catint(int digit1, int digit2)
{
	ft_putint(digit1, 98);
	write(1, " ", 1);
	ft_putint(digit2, 99);
	if (digit1 != 98 || digit2 != 99)
	{
		ft_putchar(',', ' ');
	}
}

void	ft_print_comb2(void)
{
	int	numb1;
	int	numb2;

	numb1 = 0;
	while (numb1 <= 98)
	{
		numb2 = numb1 + 1;
		while (numb2 <= 99)
		{
			ft_catint(numb1, numb2);
			numb2++;
		}
		numb1++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
}
*/
