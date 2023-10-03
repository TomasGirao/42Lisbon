/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:47:09 by gumarque          #+#    #+#             */
/*   Updated: 2023/08/05 18:30:55 by gumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (src[l] != 0)
	{
		l++;
	}
	while (src[i] != '\0' && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (l);
}
/*
int	main(void)
{
	char	src[] = "WHAT THE DOG DOIN?";
	char	dest[] = "Heyo Pierre wanna come out here";
	unsigned int	s = 30;

	printf("src string: %s\n", src);
	printf("dest string: %s\n", dest);
	printf("src size: %d\n", ft_strlcpy(dest, src, s));
	printf("dest string after function: %s\n", dest);
}*/
