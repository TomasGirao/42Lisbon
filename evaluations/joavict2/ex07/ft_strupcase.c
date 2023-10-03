/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavict2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:50:39 by joavict2          #+#    #+#             */
/*   Updated: 2023/08/05 18:29:03 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	is_alphabetic(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	uppercase_char(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (is_alphabetic(str[index]))
		{
			str[index] = uppercase_char(str[index]);
		}
		index++;
	}
	return (str);
}

int	main(void)
{
	char	str1[] = "abcde";
	char	str2[] = "make me uppercase";
	char	str3[] = "oh, evaluator!! hi!!";

	printf("abcde -> %s\n", ft_strupcase(str1));
	printf("make me uppercase -> %s\n", ft_strupcase(str2));
	printf("oh, evaluator!! hi!! -> %s\n", ft_strupcase(str3));
	return (0);
}
