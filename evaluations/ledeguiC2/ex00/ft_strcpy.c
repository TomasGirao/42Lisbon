/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-gui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:42:57 by lede-gui          #+#    #+#             */
/*   Updated: 2023/08/01 18:08:30 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	*src;
	char	dest[50];

	src = "Bem vindo ao que interessa!";
	printf("String source: %s\n String dest: %s\n", src, dest);
	ft_strcpy(dest, src);
	printf("Depois da funcao:\n\nString source: %s\nString dest: %s", src, dest);
}
