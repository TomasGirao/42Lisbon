/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavict2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:56:53 by joavict2          #+#    #+#             */
/*   Updated: 2023/08/05 18:26:46 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!is_numeric(str[index]))
		{
			return (0);
		}
		index++;
	}
	return (1);
}

int	main(void)
{
	printf("123a -> %d\n", ft_str_is_numeric("123a"));
	printf("123 -> %d\n", ft_str_is_numeric("123"));
	printf("ABC -> %d\n", ft_str_is_numeric("abc"));
	printf("1T -> %d\n", ft_str_is_numeric("1T"));
	printf("EMPTY STR -> %d\n", ft_str_is_numeric(""));
	return (0);
}
