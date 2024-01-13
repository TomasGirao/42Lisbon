/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenrik- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:42:39 by mhenrik-          #+#    #+#             */
/*   Updated: 2023/08/14 22:03:01 by mhenrik-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*p;

	p = dest;
	while (*src)
		*dest++ = *src++; 
	*dest = '\0';
	return (p); 
}
/*
int	main(void)
{
	char	dst[100];

	printf("%s", ft_strcpy(dst, "Hello World\n")); 
	printf("%s", ft_strcpy(dst, "")); 
}
*/
