/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:41:37 by guilhefe          #+#    #+#             */
/*   Updated: 2023/08/12 19:41:39 by guilhefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dest;

	i = max - min;
	if (i <= 0)
	{
		range = 0;
		return (0);
	}
	dest = (int *)malloc(i * sizeof(int));
	if (!dest)
	{
		range = 0;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	*range = dest;
	return (i);
}
/*
int main()
{
    int *range;
    int i;
    int max = 7;
    int min = 2;

    int size = ft_ultimate_range(&range, min, max);

    if (size == 0)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    else if (size == -1)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Allocated array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", range[i]);
    }
    
    free(range);

    return 0;
}
*/
