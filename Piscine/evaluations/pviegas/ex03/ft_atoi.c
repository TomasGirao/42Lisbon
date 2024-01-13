/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:44:31 by pviegas-          #+#    #+#             */
/*   Updated: 2023/08/08 12:04:55 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	is_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' 
		|| c == '\t' || c == '\v')
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	minus;
	int	i;
	int	result;

	minus = 0;
	i = 0;
	result = 0;
	while (is_space(str[i]) == 0)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result + str[i] -48;
		if (str[i + 1] != '\0' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
			result = result * 10;
		i++;
	}
	if ((minus % 2) != 0)
		result = -result;
	return (result);
}
/*
int	main(void)
{
	char *str = "                 ++-+-+-+--2147483648wertertw243523";

	printf("%d", ft_atoi(str));
}*/
