/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-avel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:00:16 by sde-avel          #+#    #+#             */
/*   Updated: 2023/08/02 18:27:30 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		ft_swap(&tab[left], &tab[right]);
		left++;
		right--;
	}
}

int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5};
	int	size = sizeof(array) / sizeof(array[0]);

	//print original array
	int	i = 0;

	while (i < size)
	{
		char	num_char = array[i] + '0';
		write(1, &num_char, 1);
		write(1, " ", 1);
		i++;
	}

	ft_rev_int_tab(array, size);

	//print reverse array
	write(1, "\n", 1);
	i = 0;
	while (i < size)
	{
		char	num_char = array[i] + '0';
		write(1, &num_char, 1);
		write(1, " ", 1);
		i++;
	}

	return (0);
}
