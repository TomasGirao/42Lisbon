/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephilip <sephilip@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:36:47 by sephilip          #+#    #+#             */
/*   Updated: 2023/08/16 00:12:38 by sephilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sizecalc(int size, char **strs, char *sep)
{
	int	sep_len;
	int	str_len;
	int	i;
	int	j;
	int	len;

	sep_len = 0;
	str_len = 0;
	i = 0;
	while (sep[sep_len])
		sep_len++;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			str_len++;
		}
		i++;
	}
	len = str_len + (sep_len * (size - 1));
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	while (dest[j])
		j++;
	i = 0;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*ptr;

	i = 0;
	if (size == 0)
	{
		ptr = malloc(sizeof(char));
		*ptr = '\0';
		return (ptr);
	}
	len = ft_sizecalc(size, strs, sep);
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[0] = '\0';
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i != size - 1)
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}
/*
int	main()
{	
	char	*ptr[] = {"HEY", "ABC", "123"};
	char	sep[] = "_.:";
	char	*str;

	str = ft_strjoin(3, ptr, sep);
	while (*str)
	{
		printf("str: %c\n", *str);
		str++;
	}
	return (0);
}*/
