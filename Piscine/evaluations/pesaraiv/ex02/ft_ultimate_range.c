/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesaraiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:39:38 by pesaraiv          #+#    #+#             */
/*   Updated: 2023/08/13 19:10:50 by pesaraiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	range_size;
	int	i;

	range_size = max - min;
	i = 0;
	if (range == NULL)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(range_size * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < range_size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (range_size);
}
/*int main()
{
	int min = 5;
	int max = 20;
	int *range;
	int size = ft_ultimate_range(&range, min, max);
	if (size != -1)
	{
		int i = 0;
		while (i < size)
		{
			printf("%d ", range[i]);
			i++;
		}
		printf("\n");
	}
	else
		printf("Invalid range or memory allocation failed.\n");
}*/
