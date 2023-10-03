/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:46:07 by tomarque          #+#    #+#             */
/*   Updated: 2023/07/30 14:43:30 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	holder;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		holder = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = holder;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {5, 2, 7, 4};
	int	size;

	size = 4;
	ft_rev_int_tab(tab, size);
	printf("Inverted: ");
	for (int i = 0; i < (size -1); i++)
		printf("%d, ", tab[i]);
	printf("%d\n", tab[size - 1]);
	return (0);
}
*/
