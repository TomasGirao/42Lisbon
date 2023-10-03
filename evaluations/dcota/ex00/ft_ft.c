/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcota-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:28:42 by dcota-pa          #+#    #+#             */
/*   Updated: 2023/07/30 10:25:14 by dcota-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char c)
{
        write(1, &c, 1);
}
*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
void	print_2_digits(int n)
{
	char ch01;
	char ch02;
	
	ch01 = 48 + n / 10;
	ch02 = 48 + n % 10;
	
	ft_putchar(ch01);
	ft_putchar(ch02);

}

int	main (void)
{
	int N;
	int *pN;
	
	pN = &N;
	N = 59;
	print_2_digits(N);
	ft_ft(pN);
	print_2_digits(N);
	
}
*/
