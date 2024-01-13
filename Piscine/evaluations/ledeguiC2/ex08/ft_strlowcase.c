/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-gui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:29:24 by lede-gui          #+#    #+#             */
/*   Updated: 2023/08/01 16:28:05 by lede-gui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str[] = "ILAJSDLASJKGLSjfiajsifj";

	printf("String antes %s\n ", str);
	printf("String depois %s", ft_strlowcase(str));
}*/
