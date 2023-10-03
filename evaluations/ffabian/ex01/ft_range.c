/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffabian- <ffabian-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:46:44 by ffabian-          #+#    #+#             */
/*   Updated: 2023/08/16 03:05:36 by ffabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *) malloc(size * sizeof (int));
	if (range != NULL)
	{
		i = 0;
		while (i < size)
		{
			range[i] = min + i;
			i++;
		}
	}
	return (range);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*str;
	int	i;

	min = 10;
	max = 20;
	i = 0;
	str = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d\n", str[i]);
		i++;
	}
}
*/
