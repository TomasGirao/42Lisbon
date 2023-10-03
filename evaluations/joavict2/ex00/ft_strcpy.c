/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavict2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:22:00 by joavict2          #+#    #+#             */
/*   Updated: 2023/08/05 18:24:27 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[6];
	char	*src;

	src = "Pizza";
	ft_strcpy(dest, src);
	printf("SRC: %s\n", src);
	printf("CPY: %s\n", dest);
	printf("Teste: %s\n", ft_strcpy(dest, src));
	return (0);
}
