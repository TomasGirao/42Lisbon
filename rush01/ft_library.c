/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_library.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 05:19:15 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/06 09:43:20 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_str(char *str)
{
	while (*str)
	{
		ft_write(*str);
		str++;
	}
}

int	ft_error(char *str)
{
	if (ft_len(str) != 31)
		return (1);
	else
		return (0);
}

int	ft_atoi(char nb)
{
	int	a;

	a = nb - 48;
	return (a);
}

char	**ft_array(char *str, int size)
{
	int	**array;

	array = (int **)malloc(size * sizeof(int *));
	while (array)
	{
		array = (int *)malloc(size * sizeof(int));
		array++;
	}
}























