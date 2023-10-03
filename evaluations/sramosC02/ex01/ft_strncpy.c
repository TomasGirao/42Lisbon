/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramos-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:40:51 by sramos-p          #+#    #+#             */
/*   Updated: 2023/08/01 15:30:26 by sramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char		src[] = "Hello from the outside!";
	char		dest[50];
	unsigned int	n;

	n = 6;
	printf("A: %s\n\n", src);
	printf("B: %s\n\n", dest);
	printf("Chars copied: %u\n\n", n);
	printf("C: %s\n", ft_strncpy(dest, src, n));
	return (0);
}*/
