/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asofia-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:30:14 by asofia-g          #+#    #+#             */
/*   Updated: 2023/08/04 19:07:48 by asofia-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	control;

	i = 0;
	control = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90))
		{
			control = 0;
			break ;
		}
		i++;
	}
	return (control);
}
/*
int	main()
{
	char	test[] = "TESTANDO";
	printf("%s\n", test);
	printf("%d\n",ft_str_is_uppercase(test));
	char	test1[] = "testandoU";
	printf("%s\n", test1);
	printf("%d\n",ft_str_is_uppercase(test1));
	char    test2[] = "testando1";
	printf("%s\n", test2);
	printf("%d\n",ft_str_is_uppercase(test2));
	char    test3[] = "";
	printf("vazio%s\n", test3);
	printf("%d\n",ft_str_is_uppercase(test3));
}
*/
