/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasaes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 04:23:33 by bcasaes-          #+#    #+#             */
/*   Updated: 2023/08/07 04:38:23 by bcasaes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "OLA";
	char	str2[] = "ola";
	char	str3[] = "014";

	printf("str: %d\n", ft_str_is_uppercase(str1));
	printf("str: %d\n", ft_str_is_uppercase(str2));
	printf("str: %d\n", ft_str_is_uppercase(str3));
	return (0);
}*/
