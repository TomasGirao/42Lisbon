/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lideias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:14:23 by lideias-          #+#    #+#             */
/*   Updated: 2023/08/07 16:15:05 by lideias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	count_dest;
	int	count_src;

	count_src = 0;
	count_dest = 0;
	while (dest[count_dest] != '\0')
	{
		count_dest++;
	}
	while (src[count_src] != '\0')
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
	char	str1[20] = "abcd ";
	char	str2[] = "defgh ";
	char	*result;

	result = ft_strcat(str1, str2);
	printf("ft_strcat = %s\n", result);
}
*/
