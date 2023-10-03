/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:41:36 by gumarque          #+#    #+#             */
/*   Updated: 2023/08/05 19:23:15 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*aux;
	unsigned int	i;

	aux = dest;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
	}
	return (aux);
}

int 	main(void)
{
	char	src[6] = "abcde";
	char	dest[13] = "000000000000";
	
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	ft_strncpy(dest, src, 2);
	printf("new dest: %s\n", dest);
	return (0);
}
