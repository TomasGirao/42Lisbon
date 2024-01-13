/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramos-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:16:48 by sramos-p          #+#    #+#             */
/*   Updated: 2023/07/31 16:51:05 by sramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}
/*
int	main(void)
{
	char		src[] = "Hello from the outside!";
	char		dest[] = "";
	unsigned int	size;

	size = 12;
	printf("Source: %s\n", src);
	printf("\nReturn value: %u\n", ft_strlcpy(dest, src, size));
	printf("\nDest: %s\n", dest);
	return (0);
}*/
