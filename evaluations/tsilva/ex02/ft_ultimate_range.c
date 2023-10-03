/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:37:44 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/08/16 14:59:24 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	length = max - min;
	*range = (int *) malloc(length * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < length)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (length);
}
/*
int	main(void)
{
	int	*ptr;
	int	i;
	int	size;

	size =  ft_ultimate_range(&ptr, -2, 3);
	i = 0;
	printf("Returned value: %d ", size);
	printf("\n");
	printf("Array: ");
	while (i < size)
	{
		printf("%d ", ptr[i]);
		i++;
	}
	return (0);
}*/
