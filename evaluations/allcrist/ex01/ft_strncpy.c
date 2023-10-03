/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:45:35 by allcrist          #+#    #+#             */
/*   Updated: 2023/08/02 16:16:49 by allcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
		if (i == n)
		{
			dest[i] = '\0';
			break ;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	str1[] = "arroz";
	char	str2[] = "feijao";

	printf("%s", ft_strncpy(str1, str2, 4));
	return (0);
}*/
