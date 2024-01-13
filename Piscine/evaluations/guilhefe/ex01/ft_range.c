/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:59:21 by guilhefe          #+#    #+#             */
/*   Updated: 2023/08/12 18:59:24 by guilhefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	if (max <= min)
		return (NULL);
	dest = (int *)malloc((max - min) * sizeof(int));
	if (!dest)
		return (0);
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
/*
int main()
{
    int *dest;
    int i = 0;
    long l = 0;
    int max =-2147483648;
    int min = 2147483647;

    dest = ft_range(min, max);
    if (dest == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    while (l < (max - min)) 
    {
        printf("%d", dest[i]);
        i += 1;
    }
    free(dest);
    return 0;
}*/
