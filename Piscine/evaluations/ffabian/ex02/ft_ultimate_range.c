/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffabian- <ffabian-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:45:05 by ffabian-          #+#    #+#             */
/*   Updated: 2023/08/16 03:52:33 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*res;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	i = 0;
	res = (int *) malloc(size * sizeof (int));
	if (res != NULL)
	{
		while (i < size)
		{
			res[i] = min + i;
			i++;
		}
		return (size);
	}
	return (-1);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;

	min = 2;
	max = 5;
	tab = ft_ultimate_range (&tab, min, max);
	printf("El tamanho de range es: %d", tab); 
}
*/
