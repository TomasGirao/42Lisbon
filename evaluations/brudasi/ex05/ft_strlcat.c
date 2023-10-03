/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:39:12 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/09 07:49:58 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

/*size_t strlcat(dst, src, siz)
	char *dst;
	const char *src;
	size_t siz;
{
	register char *d = dst;
	register const char *s = src;
	register size_t n = siz;
	size_t dlen;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;
	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return(dlen + (s - src));
}*/

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_count;
	unsigned int	dest_s;
	unsigned int	str_return;

	i = 0;
	size_count = ft_strlen(dest);
	dest_s = ft_strlen(dest);
	str_return = ft_strlen(src);
	if (size == 0 || size <= dest_s)
		return (str_return + size);
	while (src[i] != '\0' && i < size - dest_s - 1)
	{
		dest[size_count] = src[i];
		i++;
		size_count++;
	}
	dest[size_count] = '\0';
	return (str_return + dest_s);
}
/*
int	main(void)
{
	char	dest1[] = "Hello ";
	char	str1[] = "Worllia!";
	char	dest2[] = "Hello ";
	char	str2[] = "Worldia!";

	
	printf("test ft_strlcat:%u, dest1: %s \n", ft_strlcat(dest1, str1, 20), dest1);
	printf("test strlcat:%zu, dest2: %s \n", strlcat(dest2, str2, 20), dest2);
}*/
