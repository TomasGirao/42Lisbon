/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenrik- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:42:39 by mhenrik-          #+#    #+#             */
/*   Updated: 2023/08/12 02:18:35 by mhenrik-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*p;

	p = str;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			(*str) += 32; 
		str++;
	}
	return (p); 
}
/*
int	main(void)
{
	char	str1[] = "hEllO wOrLd AZ";
	char	str2[] = "4e||O__w0tLdaz";
	char	str3[] = "";
	printf("%s: ", str1); 
	printf("%s\n", ft_strlowcase(str1)); 
	printf("%s: ", str2); 
	printf("%s\n", ft_strlowcase(str2)); 
	printf("Empty string: "); 
	printf("%s\n", ft_strlowcase(str3)); 
}*/
