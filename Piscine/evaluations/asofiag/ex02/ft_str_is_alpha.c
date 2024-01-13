/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asofia-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:29:03 by asofia-g          #+#    #+#             */
/*   Updated: 2023/08/05 14:04:07 by asofia-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	control;

	i = 0;
	control = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && 
			(str[i] < 97 || str[i] > 122))
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
	printf("%s\n",test);
	printf("%d\n",ft_str_is_alpha(test));
	char	test1[] = "testando1";
	printf("%s\n",test1);
	printf("%d\n",ft_str_is_alpha(test1));
	char    test2[] = "";
	printf("Vazio %d\n",ft_str_is_alpha(test2));
}
*/
