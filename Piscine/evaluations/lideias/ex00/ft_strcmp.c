/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lideias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:13:15 by lideias-          #+#    #+#             */
/*   Updated: 2023/08/07 16:13:18 by lideias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	count;

	count = 0;
	while ((s1[count] == s2[count]) && (s2[count] != '\0') 
		&& (s1[count] != '\0'))
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
/*
int main(void)
{
	char	str1[] = "Geeks46";
	char	str2[] = "Geeks48";
	int	result;
	int	result2;

	result = ft_strcmp(str1, str2);
	printf("ft_strcmp(%s, %s) = %d\n", str1, str2, result);
	result2 = strcmp(str1, str2);
	printf("strcmp(%s, %s) = %d\n", str1, str2, result2);
	return (0);
}
*/
