/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:50:34 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/08/16 15:37:17 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	length;

	i = 0;
	length = (max - min);
	if (min >= max)
	{
		ptr = NULL;
		return (ptr);
	}
	ptr = (int *)malloc(length * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (i < length)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*ptr;
	int	i;
	int	length;
	
	min = -214;
	max = 214;
	length = max - min;
	ptr = ft_range(min, max);
	i = 0;
	while (i < length)
	{
		printf("%d ", ptr[i]);
		i++;
	}
	return (0);
}*/
