/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephilip <sephilip@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:00:39 by sephilip          #+#    #+#             */
/*   Updated: 2023/08/16 18:47:19 by sephilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	ptr = (int *)malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (-1);
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (size);
}
/*
int	main()
{
	int	*range;
	int	i;
	int	x;

	i = 0;
	x = ft_ultimate_range(&range, -6, 9);
	if (x == 0)
	{
		printf("NULL BOY");
		return (0);
	}
	while (i < 15)
	{
		printf("range: %d %d\n", range[i], x);
		i++;

	}
	return (0);
}*/
