/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavict2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:09:35 by joavict2          #+#    #+#             */
/*   Updated: 2023/08/05 18:26:17 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alphabetic(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!is_alphabetic(str[index]))
		{
			return (0);
		}
		index++;
	}
	return (1);
}

int	main(void)
{
	printf("KeepSwimming -> %d\n", ft_str_is_alpha("KeepSwimming"));
	printf("EMPTY STR -> %d\n", ft_str_is_alpha(""));
	printf("Un1c0rn -> %d\n", ft_str_is_alpha("Un1c0rn"));	
	return (0);
}
