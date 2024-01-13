/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenrik- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:42:39 by mhenrik-          #+#    #+#             */
/*   Updated: 2023/08/11 20:52:36 by mhenrik-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//
char	*ft_strupcase(char *str)
{
	char	*p;

	p = str;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			(*str) -= 32; 
		str++;
	}
	return (p); 
}
//int	main(void)
//{
//	char	str1[] = "hEllO wOrLd AZ";
//	char	str2[] = "4e||O__w0tLdaz";
//	char	str3[] = "";
//	printf("%s: ", str1); 
//	printf("%s\n", ft_strupcase(str1)); 
//	printf("%s: ", str2); 
//	printf("%s\n", ft_strupcase(str2)); 
//	printf("Empty string: "); 
//	printf("%s\n", ft_strupcase(str3)); 
//}
