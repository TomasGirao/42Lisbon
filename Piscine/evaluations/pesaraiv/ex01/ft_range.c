/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesaraiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:05:43 by pesaraiv          #+#    #+#             */
/*   Updated: 2023/08/13 19:10:32 by pesaraiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*array;
	int	i;

	range = max - min;
	array = (int *)malloc(range * sizeof(int));
	i = 0;
	if (min >= max)
		return (NULL);
	if (array == NULL)
		return (NULL);
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/*int main()
{
	int min = 5;
	int max = 20;
	int *range = ft_range(min,max);

	if (range != NULL)
	{
		int *current = range;
		while (current < range + max - min)
		{
			printf("%d ", *current);
			current++;
		}
		printf("\n");
	}
		else
			printf("Invalid range or memory allocation failed.\n");
		return (0);
}*/
