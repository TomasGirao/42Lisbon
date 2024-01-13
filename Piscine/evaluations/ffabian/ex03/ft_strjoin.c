/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffabian- <ffabian-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:05:47 by ffabian-          #+#    #+#             */
/*   Updated: 2023/08/16 03:49:50 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (*src != '\0')
	{
		src++;
		i++;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	char	*p_dest;

	p_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

void	ft_join(int size, char **strs, char *sep, char *strjoin)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size - 1)
	{
		ft_strcpy(&strjoin[length], strs[i]);
		length += ft_strlen(strs[i]);
		ft_strcpy(&strjoin[length], sep);
		length += ft_strlen(sep);
		i++;
	}
	ft_strcpy(&strjoin[length], strs[i]);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strjoin;
	int		total;
	int		i;

	if (size < 1)
	{
		strjoin = (char *) malloc(1);
		*strjoin = '\0';
		return (strjoin);
	}
	total = (ft_strlen(sep) * (size - 1));
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	strjoin = (char *) malloc (total + 1);
	if (strjoin == NULL)
		return (strjoin);
	ft_join(size, strs, sep, strjoin);
	return (strjoin);
}

int	main(void)
{
	char	*str[] = {"hola","mi","nombre","es","Facundo"};
	char	*sep = "_";
	char	*res;

	res = ft_strjoin(5, str, sep);
	printf("La string concatenada: %s\n", res);
}
