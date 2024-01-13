/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asofia-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:20:36 by asofia-g          #+#    #+#             */
/*   Updated: 2023/08/05 18:40:46 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		else
			return (1);
		i++;
	}
	return (1);
}

int	main()
{
	char	test[] = "123";
	printf("%s\n",test);
	printf("%d\n",ft_str_is_numeric(test));
	char	test1[] = "1abc";
	printf("%s\n",test1);
	printf("%d\n",ft_str_is_numeric(test1));
	char    test2[] = "";
	printf("vazio %s\n",test2);
	printf("%d\n",ft_str_is_numeric(test2)); 
}
