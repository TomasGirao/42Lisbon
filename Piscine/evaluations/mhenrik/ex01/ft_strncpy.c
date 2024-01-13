/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenrik- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:42:39 by mhenrik-          #+#    #+#             */
/*   Updated: 2023/08/11 20:37:40 by mhenrik-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>
//
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*s;

	s = dest;
	while (n > 0 && *src)
	{
		*s++ = *src++;
		--n;
	}
	while (n > 0)
	{
		*s++ = '\0'; 
		--n;
	}
	return (dest); 
}
//
//int	main(void)
//{
//	char	src[] = "zebra";
//	char	dst[10];
//	char	*p;
//	int	sz = (sizeof dst) / sizeof dst[0];
//		
//
//	for (int i = 0; i < sz; i++)
//		dst[i] = '*'; 
//
//	p = ft_strncpy(dst, src, 8); 
//	if (p==dst)
//		printf("pointers are the same\n"); 
//
//	for (int i = 0; i < sz; i++)
//		if (dst[i] == '\0') 
//			printf("dst[%d] = \\0\n", i); 
//		else
//			printf("dest[%d] = %c\n", i, dst[i]); 
//
//
//	printf("\n\n"); 
//	
//
//
//	for (int i = 0; i < sz; i++)
//		dst[i] = '*'; 
//
//	strncpy(dst, src, 8); 
//
//	for (int i = 0; i < sz; i++)
//		if (dst[i] == '\0') 
//			printf("dst[%d] = \\0\n", i); 
//		else
//			printf("dest[%d] = %c\n", i, dst[i]); 
//}
