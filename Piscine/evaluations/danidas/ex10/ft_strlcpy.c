/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danida-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:58:27 by danida-s          #+#    #+#             */
/*   Updated: 2023/08/05 16:22:38 by danida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	tamanho;

	tamanho = 0;
	i = 0;
	while (src[tamanho] != '\0')
	{
		tamanho++;
	}
	if (size < 1)
		return (tamanho);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (tamanho);
}
/*
int	main(void)
{
	char	s[] = "BZZQEBBAAAAA";
	char	d[250];
	int	size = 100;
	int	res1 = ft_strlcpy(d, s, size);
	
	printf("res: %d\n", res1);
	return (0);
}*/
