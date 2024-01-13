/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:52:54 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/08 19:16:29 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_connect_size(int siz, char **str, char *se)
{
	int	a;
	int	str_size;

	a = 0;
	str_size = 0;
	while (a < siz)
	{
		str_size += ft_strlen(str[a]);
		if (a < siz -1)
			str_size += ft_strlen(se);
		a++;
	}
	return (str_size);
}

void	ft_strcat(char *dest, char *src)
{
	int	size;
	int	i;

	i = 0;
	size = ft_strlen(dest);
	while (src[i])
	{
		dest[size] = src[i];
		i++;
		size++;
	}
}

void	ft_str_connect(char *dest, char **strs, char *sep, int size)
{
	int	a;

	a = 0;
	while (a < size)
	{
		ft_strcat(dest, strs[a]);
		if (a < size - 1)
			ft_strcat(dest, sep);
		a++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*null_str;
	char	*res;
	int		strs_size;

	if (size == 0)
	{
		null_str = (char *)malloc(1);
		null_str[0] = '\0';
		return (null_str);
	}
	strs_size = ft_strlen_connect_size(size, strs, sep);
	res = (char *)malloc(strs_size * sizeof(char));
	res[0] = '\0';
	ft_str_connect(res, strs, sep, size);
	return (res);
}
/*
int	main(void)
{
	char *strings[] = {"Hello", "world", "of", "programming"};
	char *separation = "-";
	char *result = ft_strjoin(3, strings, separation);

	if (result != NULL)
	{
		printf("Concatenated string: %s\n", result);
		free(result);
	}
	else
		printf("Memory allocation failed.\n");
	return (0);
}
*/
