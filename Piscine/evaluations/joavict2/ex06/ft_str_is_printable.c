/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavict2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:28:18 by joavict2          #+#    #+#             */
/*   Updated: 2023/08/05 18:28:22 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!is_printable(str[index]))
		{
			return (0);
		}
		index++;
	}
	return (1);
}

int	main(void)
{
	printf("! -> %d\n", ft_str_is_printable("!"));
	printf("SPACE -> %d\n", ft_str_is_printable(" "));
	printf("line break -> %d\n", ft_str_is_printable("\n"));
	printf("EMPTY STR -> %d\n", ft_str_is_printable(""));
	printf("34 -> %d\n", ft_str_is_printable("34"));
	return (0);
}
