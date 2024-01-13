/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasaes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 03:50:14 by bcasaes-          #+#    #+#             */
/*   Updated: 2023/08/07 04:21:53 by bcasaes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char 	str1[] = "ola";
	char	str2[] = "OLA";
	char	str3[] = "152";

	printf("str1: %d\n", ft_str_is_lowercase(str1));
	printf("str2: %d\n", ft_str_is_lowercase(str2));
	printf("str3: %d\n", ft_str_is_lowercase(str3));
	return (0);
}*/
