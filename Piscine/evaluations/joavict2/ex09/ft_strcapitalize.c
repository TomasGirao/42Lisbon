/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavict2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:13:28 by joavict2          #+#    #+#             */
/*   Updated: 2023/08/05 18:29:49 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	is_separator(char c)
{
	return ((c >= 0 && c <= 47) || (c >= 58 && c <= 64) || 
		(c >= 91 && c <= 96) || (c >= 123 && c <= 127));
}

char	is_number(char c)
{
	return (c >= 48 && c <= 57);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || is_separator(str[i - 1])) && !is_number(str[i]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
int	main(void)
{
	char	str1[] = "I dont know how im going to do this";
	char	str2[] = "how am i supposed to separate the words??";
	char	str3[] = "ok i think i got this";

	printf("I dont know how im going to do this -> %s\n", 
	ft_strcapitalize(str1));
	
	printf("how am i supposed to separate the words?? -> %s\n", 
	ft_strcapitalize(str2));
	printf("ok i think i got this -> %s\n", ft_strcapitalize(str3));
	return (0);
}
