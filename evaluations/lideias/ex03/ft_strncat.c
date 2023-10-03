/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lideias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:15:52 by lideias-          #+#    #+#             */
/*   Updated: 2023/08/07 16:15:54 by lideias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count_dest;
	unsigned int	count_src;

	count_src = 0;
	count_dest = 0;
	while (dest[count_dest] != '\0')
	{
		count_dest++;
	}
	while (src[count_src] != '\0' && count_src < nb)
	{
		dest[count_dest + count_src] = src[count_src];
		count_src++;
	}
	dest[count_dest + count_src] = '\0';
	return (dest);
}
/*
int main(void) 
{
	char	str1[20] = "asd ";
	char	str2[] = "defghijkl ";
	int	size;
	char	*result;

	size = 6;
	result = ft_strncat(str1, str2, size);
	printf("ft_strncat (%d) = %s\n", size, result);
}
*/
