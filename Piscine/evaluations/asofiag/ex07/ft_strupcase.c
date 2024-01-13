/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asofia-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:47:59 by asofia-g          #+#    #+#             */
/*   Updated: 2023/08/05 13:00:58 by asofia-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	test[] = "testando";
	printf("%s\n", test);
	printf("%s\n",ft_strupcase(test));
	char	test1[] = "tEsTaNdO";
	printf("%s\n", test1);
	printf("%s\n",ft_strupcase(test1));
	char    test2[] = "423423teTtaNdo1	";
	printf("%s\n", test2);
	printf("%s\n",ft_strupcase(test2));
	char    test3[] = "";
	printf("vazio%s\n", test3);
	printf("%s\n",ft_strupcase(test3));
}
*/
