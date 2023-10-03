/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 04:47:30 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/08 05:34:53 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;
	int	range;

	i = 0;
	range = max - min;
	if (min >= max)
	{
		array = NULL;
		return (array);
	}
	array = (int *)malloc(range * sizeof(int));
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
int	main(int argc, char **argv)
{
	int	*array;
	int	i;

	i = 0;
	if (argc)
	{
		array = ft_range(atoi(argv[1]), atoi(argv[2]));
		if (array == NULL)
		{
			printf("%s\n", "Pointer is NULL");
			return (0);
		}
		else
			while (array[i])
			{
				printf("%d", array[i]);
				i++;
			}
	}
	return (0);
}*/
