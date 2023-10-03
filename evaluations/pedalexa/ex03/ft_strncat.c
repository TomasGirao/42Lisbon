/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:41:17 by pedalexa          #+#    #+#             */
/*   Updated: 2023/08/07 16:22:55 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	h;

	i = 0;
	h = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[h] != '\0') && (nb > 0))
	{
		dest[i] = src[h];
		h++;
		i++;
		nb--;
	}
	return (dest);
}

int main (void)
{
	char dest[100] = "hello";
	char src[] = "world";
	unsigned int nb = 0;

	printf("%s\n", dest);
	printf("%s\n", src);
	printf("%s", ft_strncat(dest, src, nb));

	return (0);
}
