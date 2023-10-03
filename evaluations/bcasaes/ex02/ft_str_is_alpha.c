/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasaes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 00:28:01 by bcasaes-          #+#    #+#             */
/*   Updated: 2023/08/07 21:25:56 by bcasaes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122)
			|| (str[i] >= 65 && str[i] <= 90))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "Ola";
	char	str2[] = "1la";
	char	str3[] = " ";

	printf("str1: %d\n", ft_str_is_alpha(str1));
	printf("str2: %d\n", ft_str_is_alpha(str2));
	printf("str3: %d\n", ft_str_is_alpha(str3));
	return (0);
}*/
