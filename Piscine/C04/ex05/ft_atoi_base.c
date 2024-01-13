/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:15:47 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/12 12:15:50 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
	int	i;
	int	a;

	i = 0;
	if (ft_len(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' 
			|| base[i] == ' ' || base[i] < 32)
			return (0);
		a = i + 1;
		while (base[a])
		{
			if (base[a] == base[i])
				return (0);
			a++;
		}
		i++;
		a = i + 1;
	}
	return (1);
}

int	convert(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_helper(char *str, int a, int setup)
{
	int	i;
	int	sign;

	i = a;
	sign = 1;
	if (setup == 0)
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		return (i);
	}
	if (setup == 1)
	{
		while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		return (sign);
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	i;
	int	nb;

	result = 0;
	if (!base || check_base(base) == 0)
		return (0);
	i = ft_atoi_helper(str, 0, 0);
	sign = ft_atoi_helper(str, i, 1);
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
		i++;
	while (str[i])
	{
		nb = convert(str[i], base);
		if (nb == -1)
			return (0);
		result = (result * ft_len(base)) + nb;
		i++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	int result = ft_atoi_base("101010", "01");
	printf("Decimal: %d\n", result);
	result = ft_atoi_base("1A7B", "0123456789ABCDEF");
	printf("Decimal: %d\n", result);
	result = ft_atoi_base("-2147483648", "0123456789");
	printf("Decimal: %d\n", result);
	result = ft_atoi_base("invalid", "01234");
	printf("Decimal: %d\n", result);
	return (0);
}
*/
