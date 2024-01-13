/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasaes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 04:21:39 by bcasaes-          #+#    #+#             */
/*   Updated: 2023/08/06 21:54:41 by bcasaes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*

int	main(void)
{
	char	dest[] = "ola";
	char	src[] = "ole";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	printf("%s", src);
	return (0);
}*/
