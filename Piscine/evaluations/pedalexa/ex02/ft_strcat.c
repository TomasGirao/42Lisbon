/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:18:12 by pedalexa          #+#    #+#             */
/*   Updated: 2023/08/07 16:22:07 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	h;

	i = 0;
	h = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[h] != '\0')
	{
		dest[i] = src[h];
		h++;
		i++;
	}
	return (dest);
}

int main (void)
{
	char dest[100] = "hello";
	char src[] = "world";
	printf("%s\n", dest);
	printf("%s\n", src);
	printf("%s", ft_strcat(dest, src));

	return (0);
}
