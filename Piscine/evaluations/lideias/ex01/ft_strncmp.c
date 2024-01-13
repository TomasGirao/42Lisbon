/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lideias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:13:48 by lideias-          #+#    #+#             */
/*   Updated: 2023/08/12 11:24:26 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n == count)
		return (0);
	while (s1[count] != '\0' && s2[count] != '\0' && count < n)
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	if (count == n)
		return (0);
	return (s1[count] - s2[count]);
}

int main(void)
{
	char	str1[] = "ikwsou";
	char	str2[] = "ikwso";
	int	result;
	int	result2;
	int	size;

	size = 6;
	result = ft_strncmp(str1, str2, size);
	printf("ft_strcmp(%s, %s) = %d\n", str1, str2, result);
	result2 = strncmp(str1, str2, size);
	printf("strncmp(%s, %s) = %d\n", str1, str2, result2);
}
