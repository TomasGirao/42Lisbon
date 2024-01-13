/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:26:24 by gumarque          #+#    #+#             */
/*   Updated: 2023/08/05 19:22:33 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*aux;

	aux = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'; 
	return (aux); 
}

int	main(void)
{
	char	dest[50];
	char	*src = "What the dog doin?";
	char	*out;

	out = ft_strcpy(dest, src);
	printf("%s", dest);
	printf("\n");
	printf("%s\n", out);
}
