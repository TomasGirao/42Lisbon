/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavict2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:17:48 by joavict2          #+#    #+#             */
/*   Updated: 2023/08/05 18:27:53 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!is_uppercase(str[index]))
		{
			return (0);
		}
		index++;
	}
	return (1);
}

int	main(void)
{
	printf("ALLUPPERCASE -> %d\n", ft_str_is_uppercase("ALLUPPERCASE"));
	printf("NoTuPPeRcASe -> %d\n", ft_str_is_uppercase("NoTuPPeRcAsE"));
	printf("EMPTY STR -> %d\n", ft_str_is_uppercase(""));
	return (0);
}
