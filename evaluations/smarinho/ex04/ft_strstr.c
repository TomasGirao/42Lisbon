/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarinho <smarinho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:44:55 by smarinho          #+#    #+#             */
/*   Updated: 2023/08/04 16:09:04 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	detect;

	i = 0;
	j = 0;
	detect = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				detect = 1;
			}
		}
		j = 0;
		i++;
	}
	if (detect == 1)
	{
		return (to_find);
	}
	return (0);
}

int	main(void)
{
	char	*src;
	char	*to_find;

	src = "name: SaSaile Marinho";
	to_find = "Saile";
	ft_strstr(src, to_find);
	printf("%s\n", to_find);
	return (0);
}
