/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavieir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:16:16 by anavieir          #+#    #+#             */
/*   Updated: 2023/08/04 15:41:54 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	lgt;
	unsigned int	cop;

	lgt = 0;
	cop = 0;
	while (src[lgt] != '\0')
		lgt++;
	if (size == 0)
		return (lgt);
	while (cop + 1 < size && src[cop] != '\0')
	{
		dest[cop] = src[cop];
		cop++;
	}
	dest[cop] = '\0';
	return (lgt);
}

int	main(void)
{
	char	str[] = "Helloooooo";
	char	str2[11];

	ft_strlcpy(str2, str, 11); 
	printf("%s\n", str2);
	return (0);
}
