/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcasaes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 04:40:06 by bcasaes-          #+#    #+#             */
/*   Updated: 2023/08/07 06:28:43 by bcasaes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int 	main(void)
{
	char	str1[] = "OLA";
	char	str2[] = "\r";

	printf("str1: %d\n", ft_str_is_printable(str1));
	printf("str2: %d\n", ft_str_is_printable(str2));
	return (0);
}*/
