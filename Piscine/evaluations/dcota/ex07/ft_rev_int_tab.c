/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcota-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:31:07 by dcota-pa          #+#    #+#             */
/*   Updated: 2023/07/30 16:12:16 by tomarque         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;

	counter = 0;
	while (counter < size / 2)
	{
		ft_swap(&tab[counter], &tab[size - counter - 1]);
		counter ++;
	}
}
/*
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
*/
