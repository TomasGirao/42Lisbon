/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:56:21 by pedalexa          #+#    #+#             */
/*   Updated: 2023/08/07 16:24:28 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		n;
	int		h;
	int		j;

	i = 0;
	n = 0;
	j = 0;
	while (to_find[n] != '\0')
	{
		n++;
	}
	while (str[i] != '\0')
	{
		h = 0;
		while (str[i + h] == to_find[h])
		{
			if (h == n - 1)
				return (&str[j]);
			h++;
		}
		i++;
		j++;
	}
	return (NULL);
}

int main (void)
{
	char str[] = "ola tudo bem";
	char to_find[] = "tu";
	printf("%s", ft_strstr(str, to_find));
}
