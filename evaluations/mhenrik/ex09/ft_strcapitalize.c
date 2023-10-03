/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenrik- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:42:39 by mhenrik-          #+#    #+#             */
/*   Updated: 2023/08/15 18:50:36 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	big(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	small(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	alphanum(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	char	*p;

	p = str;
	if (*str && small(*str))
		*str -= 32; 
	while (*str++)
		if (*str && small(*str) && !alphanum(*(str - 1)))
			*str -= 32;
	else if (big(*str) && alphanum(*(str - 1)))
		*str += 32;
	return (p);
}

int	main(void)
{
	char	str1[] = "h4ellO w4rLd";
	char	str2[] = "4E||O_ w0rLd";
	char	str3[] = "";
	char	str4[] = "n";
	char	str5[] = "SS4qu Y4Zrante-deux; ZinquantE+et+uN";
	printf("%s: ", str5); 
	printf("%s\n", ft_strcapitalize(str5)); 
	printf("%s: ", str1); 
	printf("%s\n", ft_strcapitalize(str1)); 
	printf("%s: ", str2); 
	printf("%s\n", ft_strcapitalize(str2)); 
	printf("Empty string: "); 
	printf("%s\n", ft_strcapitalize(str3)); 
	printf("%s: ", str4); 
	printf("%s\n", ft_strcapitalize(str4)); 
}
