/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:59:04 by pedalexa          #+#    #+#             */
/*   Updated: 2023/08/07 16:25:37 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	h;
	unsigned int	s;

	i = 0;
	h = 0;
	s = 0;
	while (dest[i] != '\0')
	{
		s++;
		i++;
	}
	while (src[h] != '\0' && size > 0)
	{
		dest[i] = src[h];
		i++;
		h++;
		s++;
		size--;
	}
	return (s);
}

int main (void)
{
	char dest[100] = "hello";
	char src[] = "world";
	printf("%d", ft_strlcat(dest, src, 3));
}
