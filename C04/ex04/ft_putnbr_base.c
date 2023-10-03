/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:13:30 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/12 16:16:04 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	base_len;
	int	i;
	int	j;

	base_len = ft_len(base);
	i = 0;
	j = 1;
	if (base_len <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	base_len;
	long	number;

	number = nbr;
	base_len = ft_len(base);
	if (check_base(base) == 1)
	{
		if (number < 0)
		{
			write(1, "-", 1);
			number = -number;
		}
		if (number >= base_len)
		{
			ft_putnbr_base(number / base_len, base);
			ft_putnbr_base(number % base_len, base);
		}
		else
			write(1, &base[number], 1);
	}
}
/*
int	main(void)
{
	write(1, "Binary: ", 8);
	ft_putnbr_base(255, "01");
	write(1, "\nHexadecimal: ", 14);
	ft_putnbr_base(255, "0123456789ABCDEF");
	write(1, "\nRepeated: ", 11);
	ft_putnbr_base(255, "0113456789");
	write(1, "\nOctal: ", 8);
	ft_putnbr_base(-255, "poneyvif");
	write(1, "\nDecimal: ", 10);
	ft_putnbr_base(123456789, "0123456789");
	write(1, "\nEmpty: ", 8);
	ft_putnbr_base(255, "");
	write(1, "\n", 1);
	return 0;
}
*/
