/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lideias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:16:22 by lideias-          #+#    #+#             */
/*   Updated: 2023/08/12 11:29:01 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		if ((*str == *to_find)
			&& (*str != '\0' && *to_find != '\0'))
		{
			while ((*str == *to_find)
				&& (*str != '\0' && *to_find != '\0'))
			{
				str++;
				to_find++;
			}
			if (*str != *to_find && *to_find != '\0')
			{
				return (NULL);
			}
			return (str);
		}
		str++;
	}
	return (NULL);
}

int main(void) 
{
	char	str1[20] = "abcdefg ";
	char	str2[] = "";
	char	str3[] = "cder";
	char	str4[] = "c";
	char	str5[] = "h";
	char	*result;

	result = ft_strstr(str1, str2);
	printf("\nft_strstr(%s, %s) = %s\n", str1, str2, result);
	printf("strstr(%s, %s) = %s\n\n", str1, str2, strstr(str1, str2));
	result = ft_strstr(str1, str3);
	printf("ft_strstr(%s, %s) = %s\n", str1, str3, result);
	printf("strstr(%s, %s) = %s\n\n", str1, str3, strstr(str1, str3));
	result = ft_strstr(str1, str4);
	printf("ft_strstr(%s, %s) = %s\n", str1, str4, result);
	printf("strstr(%s, %s) = %s\n\n", str1, str4, strstr(str1, str4));
	result = ft_strstr(str1, str5);
	printf("ft_strstr(%s, %s) = %s\n", str1, str5, result);
	printf("strstr(%s, %s) = %s\n\n", str1, str5, strstr(str1, str5));
}
