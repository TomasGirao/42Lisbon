/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 05:35:18 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/09 08:23:42 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;
	int	rg;

	i = 0;
	rg = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	array = (int *)malloc(rg * sizeof(int));
	if (!array)
	{
		*range = 0;
		return (-1);
	}
	*range = array;
	while (i < rg)
	{
		*range[i] = min + i;
		i++;
	}
	return (rg);
}
/*
int	main(int argc, char **argv)
{
	int	*arr;
	int	i;
	int	size;

	i = 0;
	if (argc)
	{
		size = ft_ultimate_range(&arr, atoi(argv[1]), atoi(argv[2]));
		while (i < size)
		{
			printf("%d, ", arr[i]);
			i++;
		}
	}
	return (0);
}
*/
