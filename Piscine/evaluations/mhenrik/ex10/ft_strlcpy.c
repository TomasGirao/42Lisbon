/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenrik- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:42:39 by mhenrik-          #+#    #+#             */
/*   Updated: 2023/08/12 02:03:53 by mhenrik-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i + 1 < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

//int	main(void)
//{
//	char	src[] = "Hello there, Venus";
//	char 	dst_length = 15; 
//	char	dst[dst_length];
//	int 	test_dst_size = 15;
//	unsigned int rtn; 
//
//	for (int i = 0; i < dst_length; i++)
//		dst[i] = '*'; 
//
//	rtn = ft_strlcpy(dst, src, test_dst_size); 
//
//
//	for (int i = 0; i < dst_length; i++)
//		if (dst[i] == '\0') 
//			printf("dst[%d] = \\0\n", i); 
//		else
//			printf("dest[%d] = %c\n", i, dst[i]); 
//	printf("Funcion returned %d\n", rtn); 
//}
