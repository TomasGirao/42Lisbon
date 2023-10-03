/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:00:29 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/12 10:00:32 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s_size;
	unsigned int	d_size;

	i = 0;
	j = ft_len(dest);
	d_size = ft_len(dest);
	s_size = ft_len(src);
	if (size == 0 || size <= d_size)
		return (s_size + size);
	while (src[i] && i < size - d_size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (d_size + s_size);
}
/*
int	main(void)
{
	char	src[] = "Kumalala";
	char	dest[] = "Savesta";
	printf("%i", ft_strlcat(dest, src, 15));
	return (0);
}
*/
