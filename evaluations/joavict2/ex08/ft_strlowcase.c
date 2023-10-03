/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavict2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:56:48 by joavict2          #+#    #+#             */
/*   Updated: 2023/08/05 18:29:27 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	is_alphabetic(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	lowercase_char(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (is_alphabetic(str[index]))
		{
			str[index] = lowercase_char(str[index]);
		}
		index++;
	}
	return (str);
}

int	main(void)
{
	char	str1[] = "ABCDE";
	char	str2[] = "MAKE ME LOWERCASE";
	char	str3[] = "OH, EVALUATOR!! YOU AGAIN?? HI!!";

	printf("ABCDE -> %s\n", ft_strlowcase(str1));
	printf("MAKE ME LOWERCASE -> %s\n", ft_strlowcase(str2));
	printf("OH, EVALUATOR!! YOU AGAIN? HI!! -> %s\n", ft_strlowcase(str3));
	return (0);

}
