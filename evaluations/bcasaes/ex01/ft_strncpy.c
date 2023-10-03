/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasaes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 21:56:39 by bcasaes-          #+#    #+#             */
/*   Updated: 2023/08/08 03:45:10 by bcasaes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest [i] = src [i];
		i++;
	}
	while (i <= n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "OleOla";
	char	dest[] = "e";

	printf("%s\n", ft_strncpy(dest, src, 10));
	printf("%s", src);
	return(0);
}
*/
