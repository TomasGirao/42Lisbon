/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danida-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 08:36:58 by danida-s          #+#    #+#             */
/*   Updated: 2023/08/05 16:18:57 by danida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "im awesome";
	char	src1[] = "im awesome";
	char	dest[15] = "LoL";
	char	dest1[15] = "LoL";
	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", strcpy(dest1, src1));
	return (0);
}*/
