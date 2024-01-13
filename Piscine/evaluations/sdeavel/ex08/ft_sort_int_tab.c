/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-avel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:48:29 by sde-avel          #+#    #+#             */
/*   Updated: 2023/08/02 18:28:04 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	sorted;
	int	i;
	int	j;

	sorted = 0;
	i = 0;
	while (!sorted)
	{
		sorted = 1;
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
				sorted = 0;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	tab[] = {9, 3, 7, 6, 1};
	int	size = sizeof(tab) / sizeof(tab[0]);
	int	i;

	i = 0;
	while (i < size)
	{
		char    num_char = tab[i] + '0';
		write(1, &num_char, 1);
		i++;
	}
	write(1, "\n", 1);

	ft_sort_int_tab(tab, size);
	
	i = 0;
	while (i < size)
	{
		char	num_char = tab[i] + '0';
		write(1, &num_char, 1);
		i++;
	}

	return (0);
}
