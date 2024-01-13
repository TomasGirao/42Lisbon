/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:31:35 by ccavagli          #+#    #+#             */
/*   Updated: 2023/08/12 14:11:02 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_myfunct(int n)
{
	n = n + 48; 
	write (1, &n, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
	}
	if (nb <= 9)
	{
		ft_myfunct (nb);
	}
	if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_myfunct (nb % 10);
	}
}

int	main(void)
{
	int	c;
	c = -2147483648;
	ft_putnbr(c);
}
