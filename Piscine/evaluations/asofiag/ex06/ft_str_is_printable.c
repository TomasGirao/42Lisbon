/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asofia-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:34:07 by asofia-g          #+#    #+#             */
/*   Updated: 2023/08/04 19:42:43 by asofia-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	control;

	i = 0;
	control = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char	test[] = "123";
	printf("%s\n",test);
	printf("%d\n",ft_str_is_printable(test));
	char	test1[] = "	1abc";
	printf("%s\n",test1);
	printf("%d\n",ft_str_is_printable(test1));
	char    test2[] = "";
	printf("vazio %s\n",test2);
	printf("%d\n",ft_str_is_printable(test2)); 
}
*/
