/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:47:37 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/08/16 16:37:17 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	str_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
		{
			count++;
			j++;
		}
		j = 0;
		while (sep[j] != 0 && i < (size - 1))
		{
			j++;
			count++;
		}
		i++;
	}
	return (count);
}

char	*ft_strjoin2( int len, int size, char **strs, char *sep)
{
	int		k;
	int		i;
	int		j;
	char	*ptr;

	k = 0;
	i = 0;
	ptr = (char *) malloc((len + 1) * sizeof(char));
	while (k < len)
	{
		j = 0;
		while (strs[i][j] != 0)
		{
			ptr[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != 0 && i < (size - 1))
		{
			ptr[k++] = sep[j++];
		}
		i++;
	}
	ptr[k] = 0;
	return (ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*ptr;

	len = str_len(size, strs, sep);
	ptr = ft_strjoin2(len, size, strs, sep);
	if (size == 0)
		return (ptr);
	return (ptr);
}

int	main(void)
{
	char	*arr[5] = {"ola", "sou", "o", "Tiago", "23"};
	char	*sep = "+";

	printf("%s", ft_strjoin(5, arr, sep));
	return (0);
}
