/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcota-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:31:07 by dcota-pa          #+#    #+#             */
/*   Updated: 2023/07/30 16:14:28 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

/* this is bubble sort there are other sorting mechanisms */
void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	n_bubbles;

	n_bubbles = 0;
	counter = 0;
	while (n_bubbles < size)
	{
		counter = 0;
		while (counter < size - 1)
		{
			if (tab[counter] > tab[counter + 1])
			{
				ft_swap(&tab[counter], &tab[counter + 1]);
			}
			counter ++;
		}
		n_bubbles ++; 
	}
}

int	main(void)
{
	int tab[6] = {1,7,3,2,0,6};
	int i;

	i = 0;
	ft_rev_int_tab(tab, 6);
	while (i < 6)
	{
		printf("%d",tab[i]);
		i++;
	}
}
