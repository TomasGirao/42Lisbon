/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephilip <sephilip@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:44:41 by sephilip          #+#    #+#             */
/*   Updated: 2023/08/16 00:06:22 by sephilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	j = 0;
	i = min;
	array = (int *)(malloc((max - min) * sizeof(int)));
	if (array == NULL)
		return (NULL);
	while (i < max)
	{
		array[j] = i;
		i++;
		j++;
	}
	return (array);
}
/*
int	main()
{
	int	*ptr;
	int	i;

	i = 0;
	ptr = ft_range(3, 16);
	while (ptr[i])
	{
		printf("ptr: %d\n", ptr[i]);
		i++;
	}
	return (0);
}*/
