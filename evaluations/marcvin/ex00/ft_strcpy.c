/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcvin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:38:29 by marcvin2          #+#    #+#             */
/*   Updated: 2023/08/04 19:40:25 by marcvin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	z;

	z = 0;
	while (src[z] != '\0')
	{
		dest[z] = src[z];
		z++;
	}
	dest[z] = '\0';
	return (dest);
}
/*
int	main(void)
{
	int 	a;
	int	b;
	char	dest[15];
	char	*src;

	a = 0;
	b = a;
	src = "i am markin";
	printf ("%s", ft_strcpy(dest, src));
	return (0);
}
*/
