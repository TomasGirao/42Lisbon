/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danida-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:03:20 by danida-s          #+#    #+#             */
/*   Updated: 2023/08/05 16:17:57 by danida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	u;

	u = 0;
	if (str[u] == '\0')
	{
		return (1);
	}
	while (str[u] != '\0')
	{
		if ((str[u] >= 'A' && str[u] <= 'Z'))
			u++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("ERTYUIO"));
	printf("%d\n", ft_str_is_uppercase("tyuio"));
	printf("%d\n", ft_str_is_uppercase(""));
}*/
