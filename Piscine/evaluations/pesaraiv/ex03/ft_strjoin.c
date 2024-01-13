/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesaraiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:11:18 by pesaraiv          #+#    #+#             */
/*   Updated: 2023/08/13 20:05:37 by pesaraiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

char	*ft_strdup(char *str)
{
	char	*copy;
	int		len;
	int		i;

	len = ft_strlen(str);
	copy = (char *)malloc(len + 1);
	i = 0;
	if (copy)
	{
		while (i <= len)
		{
			copy[i] = str[i];
			i++;
		}
	}
	return (copy);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	result = ft_strdup(strs[0]);
	i = 1;
	if (size == 0)
	{
		return (result);
	}
	if (strs == NULL)
		return (NULL);
	if (sep == NULL)
		sep = "";
	while (i < size)
	{
		result = ft_strcat(result, sep);
		result = ft_strcat(result, strs[i]);
		i++;
	}
	return (result);
}

/*int main()
{
	char *strs[] = {"Sera", "que", "funciona", "?"};
	char *sep = " ";
	int size = sizeof(strs)/sizeof(strs[0]);
	char *concatenated = ft_strjoin(size, strs, sep);

	if (concatenated != NULL)
		printf("Concatenated: %s\n", concatenated);
	else
		printf("Invalid input or memory allocation failed.\n");
	return (0);
}*/
