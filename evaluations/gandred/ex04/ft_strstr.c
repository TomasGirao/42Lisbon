/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandre-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 17:43:14 by gandre-d          #+#    #+#             */
/*   Updated: 2023/08/05 17:37:24 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i + j] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (to_find[j] == '\0')
				{
					return (str + i);
				}
			}
		}
		i++;
	}
	return (NULL);
}
int main()
{
	char c[] = "oWAiudwd wat wajdn";
	char d[] = "wat";
	printf("%s", ft_strstr(c, d));
}
