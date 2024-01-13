/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lideias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:17:01 by lideias-          #+#    #+#             */
/*   Updated: 2023/08/12 11:31:50 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_results(int siz_src, int siz_dest, int siz, char *destiny);

unsigned int	ft_results(int siz_src, int siz_dest, int siz, char *destiny)
{
	unsigned int	result;

	if (siz_src <= siz)
	{
		destiny[siz_dest + siz_src] = '\0';
		result = siz_dest + siz_src;
	}
	else
	{
		destiny[siz_dest + siz] = '\0';
		result = siz_dest + siz;
	}
	return (result);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_src;
	unsigned int	size_dest;
	unsigned int	results;

	size_dest = 0;
	size_src = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	while (src[size_src] != '\0')
	{
		if (size_src < size)
			dest[size_dest + size_src] = src[size_src];
		size_src++;
	}
	results = ft_results(size_src, size_dest, size, dest);
	return (results);
}

int	main(void)
{
	unsigned int	size_dest;
	unsigned int	size_2_cut;
	char		str_1[] = "boa tarde!";
	char		str_2[] = "Ola, ";

	printf("Src : %s\n", str_1);
	printf("Dest : %s\n", str_2);
	size_2_cut = 6;
	size_dest = ft_strlcat(str_2, str_1, size_2_cut);
	printf("Size_dest : %d\n", size_dest);
	printf("Final Str : %s\n", str_2);
	return (0);
}
