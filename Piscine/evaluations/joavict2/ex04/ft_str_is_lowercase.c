/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavict2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:38:59 by joavict2          #+#    #+#             */
/*   Updated: 2023/08/05 18:27:21 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!is_lowercase(str[index]))
		{
			return (0);
		}
		index++;
	}
	return (1);
}

int	main(void)
{
	printf("lowercasetest -> %d\n", ft_str_is_lowercase("lowercasetest"));
	printf("UPPERCASETEST -> %d\n", ft_str_is_lowercase("UPPERCASETEST"));
	printf("notallUppercase -> %d\n", ft_str_is_lowercase("notallUppercase"));
	printf("123 -> %d\n", ft_str_is_lowercase("123"));
	printf("EMPTY STR -> %d\n", ft_str_is_lowercase(""));
	return (0);
}
