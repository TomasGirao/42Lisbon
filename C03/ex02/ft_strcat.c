/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:46:43 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/01 17:00:52 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

char	*ft_strcat(char *dest, char *src)
{
	int	size;
	int	i;

	i = 0;
	size = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[size] = src[i];
		i++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str1[] = "Hello ";
	char	str2[] = "Bye!";

	printf("%s", ft_strcat(str2, str1));
	return (0);
}
*/
