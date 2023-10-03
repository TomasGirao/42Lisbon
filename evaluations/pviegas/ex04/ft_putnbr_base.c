/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:53:56 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/08 12:37:54 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base == (char *)0 || base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0') 
	{
		if (base[i] < 32 || base[i] > 126 || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_negative(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	return (nbr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	k[20];
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (valid_base(base) == 0)
		return ;
	while (base[i] != '\0')
		i++;
	if (nbr < 0)
		nbr = is_negative(nbr);
	while (nbr >= i)
	{
		k[j++] = base[nbr % i];
		nbr = nbr / i;
	}
	k[j] = base[nbr];
	while (j >= 0)
	{
		ft_putchar(k[j]);
		j--;
	}
}
/*
int main() {
	ft_putnbr_base(42, "01");
	ft_putchar('\n');
	ft_putnbr_base(-42, "01");
	ft_putchar('\n');
	ft_putnbr_base(42, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(-42, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(42, "poneyvif");
	ft_putchar('\n');
	ft_putnbr_base(-42, "poneyvif");
	ft_putchar('\n');
	ft_putnbr_base(42, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(-42, "0123456789ABCDEF");
	ft_putchar('\n');

	return (0);
}*/
