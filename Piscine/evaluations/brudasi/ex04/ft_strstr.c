/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:09:11 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/09 07:34:50 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	find;

	i = 0;
	find = 0;
	if (to_find[find] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[find] == str[find + i]
			&& str[find + i] != '\0')
			find++;
		if (to_find[find] == '\0')
		{
			return (str + i);
		}
		find = 0;
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	src[] = "certtudo der ccccerto pra frente";
	char	to_find[] = "certo";

	printf("%s.", ft_strstr(src, to_find));
}*/
