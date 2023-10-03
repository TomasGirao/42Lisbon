/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asofia-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:20:24 by asofia-g          #+#    #+#             */
/*   Updated: 2023/08/04 19:14:33 by asofia-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	control;

	i = 0;
	control = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 97 || str[i] > 122))
		{
			control = 0;
			break ;
		}
		else
			control = 1;
		i++;
	}
	return (control);
}
/*
int	main()
{
	char	test[] = "testando";
	printf("%s\n", test);
	printf("%d\n",ft_str_is_lowercase(test));
	char	test1[] = "testandoU";
	printf("%s\n", test1);
	printf("%d\n",ft_str_is_lowercase(test1));
	char    test2[] = "testando1";
	printf("%s\n", test2);
	printf("%d\n",ft_str_is_lowercase(test2));
	char    test3[] = "";
	printf("vazio%s\n", test3);
	printf("%d\n",ft_str_is_lowercase(test3));
}
*/
