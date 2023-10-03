/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-gui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:35:20 by lede-gui          #+#    #+#             */
/*   Updated: 2023/08/01 16:19:34 by lede-gui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 96 && str[i] < 123))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	*str[] = {"abcsdesaffasdkjga", "Akjdsjgosd",
				 "123158798214", "/-*++-"};
	int	i;

	i = 0;
	while(i < 4)
	{
		printf("A string #%i - %s resulta em %i\n", i,
			 str[i], ft_str_is_lowercase(str[i]));
		i++;
	}
}*/
