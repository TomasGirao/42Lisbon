/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:30:05 by tomarque          #+#    #+#             */
/*   Updated: 2023/07/30 14:37:33 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	holder;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				holder = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = holder;
			}
			i++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	tab[] = {5, 2, 7, 4};
	int	old_tab[] = {5, 2, 7, 4};
	int	size;

	size = 4;
	ft_sort_int_tab(tab, size);
	printf("Default: ");
	for (int i = 0; i < (size - 1); i++)
		printf("%d, ", old_tab[i]);
	printf("%d\n", old_tab[size - 1]);
	printf("\n");
	printf("Ascending: ");
	for (int i = 0; i < (size - 1); i++)
		printf("%d, ", tab[i]);
        printf("%d\n", tab[size - 1]);
	return (0);
}
*/
