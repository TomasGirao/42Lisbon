/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:21:44 by guilhefe          #+#    #+#             */
/*   Updated: 2023/08/12 23:21:47 by guilhefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_repetitive(char *base, int i);
int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);

char	*nbr1(long nb, char *base, int x)
{
	char	*b;
	long	nbr;
	int		n;
	int		w;

	n = x;
	nbr = nb;
	w = 1;
	while (nbr >= x)
	{
		nbr = nbr / x;
		w++;
	}
	b = (char *)malloc(sizeof(char) * w + 1);
	b[w] = '\0';
	w--;
	while (nb >= x)
	{
		b[w] = base[nb % x];
		nb = nb / x;
		w--;
	}
	b[w] = base[nb];
	return (b);
}

int	ft_str_is_signal(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == 43) || (str[i] == 45) || str[i] <= 32 || str[i] == 127)
			return (1);
		i++;
	}
	return (0);
}

char	*p_n(int i, int x, char *c, char *b)
{
	while (i <= x)
	{
		c[i] = b[i - 1];
		i++;
	}
	c[0] = '-';
	c[i] = '\0';
	return (c);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		x;
	int		i;
	long	a;
	char	*b;
	char	*c;

	a = nbr;
	x = ft_strlen(base);
	i = 0;
	if (nbr < 0)
	{
		i = 1;
		a = -a;
	}
	b = nbr1(a, base, x);
	x = ft_strlen(b);
	c = (char *)malloc(sizeof(char) * (x + 2));
	if (i)
		return (p_n(i, x, c, b));
	return (b);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		number;
	int		x;

	x = ft_strlen(base_to);
	if (x <= 1)
		return (0);
	if (ft_str_is_signal((base_to)))
		return (0);
	if (ft_repetitive(base_to, 0))
		return (0);
	x = ft_strlen(base_from);
	if (x <= 1)
		return (0);
	if (ft_str_is_signal((base_from)))
		return (0);
	if (ft_repetitive(base_from, 0))
		return (0);
	number = ft_atoi_base(nbr, base_from);
	result = ft_putnbr_base(number, base_to);
	return (result);
}
/*
int main(void)
{
    printf("%s", ft_convert_base("-80000000", "0123456789ABCDEF", "0123456789"));
    return (0);
}*/
