/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 02:00:01 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/12 02:00:04 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recursive(int n, int start, int value, int *array)
{
	int		i;
	char	c;

	if (n == 0)
	{
		i = 0;
		while (i < value)
		{
			c = array[i] + 48;
			write(1, &c, 1);
			i++;
		}
		if (array[0] < 10 - value)
			write(1, ", ", 2);
	}
	i = start;
	while (i < 10)
	{
		array[value] = i;
		ft_recursive(n - 1, i + 1, value + 1, array);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	array[10];

	ft_recursive(n, 0, 0, array);
}
/*
int	main(void)
{
	ft_print_combn(0);
	write(1, "\n", 1);
	return (0);
}
*/
