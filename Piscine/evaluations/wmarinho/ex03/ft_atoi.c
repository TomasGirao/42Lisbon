/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:27:21 by wmarinho          #+#    #+#             */
/*   Updated: 2023/08/10 19:12:57 by wmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	paridade;
	int	numeros;

	paridade = 0;
	numeros = 0;
	while ((*str >= 0 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			paridade++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		numeros *= 10;
		numeros += *str -48;
		++str;
	}
	if (paridade % 2 == 0)
		return (numeros);
	return (-numeros);
}
/*
int	main()
{
	char *s = " ---+--+1234ab567";

	printf("%d", ft_atoi(s));
}*/
