/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramos-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:59:01 by sramos-p          #+#    #+#             */
/*   Updated: 2023/08/01 15:35:38 by sramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a')
			|| (str[i] > 'z'))
		{
			return (0);
		}
		
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "";

	// alpha = ft_str_is_alpha(str);
	printf("Value: %d\n", ft_str_is_alpha(str));
	return (0);
}*/
