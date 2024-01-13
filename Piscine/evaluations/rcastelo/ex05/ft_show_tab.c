/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 08:18:55 by rcastelo          #+#    #+#             */
/*   Updated: 2023/08/09 18:39:26 by rcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	writedigit(long power, int nb, int found)
{
	char	c;

	c = '0' + (nb % power) / (power / 10);
	if (found || c != 48)
	{
		found = 1;
		write(1, &c, 1);
	}
	return (found);
}

void	ft_putnbr(int nb)
{
	long	power;
	int		found;

	found = 0;
	power = 10000000000;
	while (power >= 10)
	{
		found = writedigit(power, nb, found);
		power /= 10;
	}
	if (!found)
		write(1, "0", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		write(1, par[i].str, ft_strlen(par[i].str));
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, ft_strlen(par[i].copy));
		write(1, "\n", 1);
		i++;
	}
}
/*
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int						i;
	struct s_stock_str		*structarray;

	structarray = malloc((ac + 1) * (4 + 8 + 8));
	i = 0;
	while (i < ac)
	{
		structarray[i].size = ft_strlen(av[i]);
		structarray[i].str = av[i];
		structarray[i].copy = malloc(structarray[i].size);
		structarray[i].copy[0] = 0;
		structarray[i].copy = ft_strcpy(structarray[i].copy, structarray[i].str);
		i++;
	}
	structarray[ac].size = 0;
	structarray[ac].str = NULL;
	structarray[ac].copy = NULL;
	return (structarray);
}

int	main(void)
{
	char	**av;
	struct s_stock_str	*structarray;

	av = malloc((3 + 1) * 8);
	av[0] = "Primeira";
	av[1] = "Segunda";
	av[2] = "Terceira";
	av[3] = NULL;
	structarray = ft_strs_to_tab(3, av);
	ft_show_tab(structarray);

	return (0);
}
*/
