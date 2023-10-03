/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:25:18 by guilhefe          #+#    #+#             */
/*   Updated: 2023/08/12 23:25:22 by guilhefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	x;
	int	i;

	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		x++;
		i++;
	}
	return (x);
}

int	nbr2(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (((str[i] >= 9) && (str[i] <= 13)) || (str[i] == 32))
	{
		i++;
	}
	while ((str[i] == 45) || (str[i] == 43))
	{
		if (str[i] == 45)
			x++;
		i++;
	}
	if ((x % 2) == 1)
		return (-i);
	return (i);
}

int	nbr3(char *str, int i, char *base, int x)

{
	int	j;
	int	k;
	int	l;

	j = 0;
	l = 0;
	k = 0;
	while (x > l)
	{
		if (str[j + i] == base[l])
		{
			k = k * x;
			k = k + l;
			l = -1;
			j++;
		}
		l++;
	}
	return (k);
}

int	ft_repetitive(char *base, int i)

{
	int	k;

	k = 0;
	while (base[i] != '\0')
	{
		if ((base[i] == 43) || (base[i] == 45) 
			|| base[i] <= 32 || base[i] == 127)
			return (1);
		i++;
	}
	while (base[k] != 0)
	{
		i = 1;
		while (base[k + i] != 0)
		{
			if (base[k] == base[k + i])
			{
				return (1);
			}
			i++;
		}
		k++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	j;
	int	i;
	int	x;
	int	k;
	int	l;

	k = ft_strlen(base);
	l = ft_repetitive(base, 0);
	if (k <= 1)
		return (0);
	if (l == 1)
		return (0);
	x = 0;
	i = nbr2(str);
	if (i < 0)
	{
		i = -i;
		x = 1;
	}
	j = nbr3(str, i, base, k);
	if (x == 1)
		j = -j;
	return (j);
}
