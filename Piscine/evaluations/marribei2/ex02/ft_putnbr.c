/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:02:49 by marribei          #+#    #+#             */
/*   Updated: 2023/08/07 18:27:44 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		ft_putnbr(147483648);
	}
	else
	{
		if (nb < 0)
		{
			putchar('-');
			nb = -nb;
		}
		if (nb == 0)
		{
			putchar('0');
			return ;
		}
		if (nb / 10 != 0)
		{
			ft_putnbr(nb / 10);
		}
		putchar(48 + (nb % 10));
	}
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}*/
