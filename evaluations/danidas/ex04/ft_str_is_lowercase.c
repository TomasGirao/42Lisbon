/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danida-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:52:56 by danida-s          #+#    #+#             */
/*   Updated: 2023/08/05 16:20:29 by danida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	l;

	l = 0;
	if (str[l] == '\0')
	{
		return (1);
	}
	while (str[l] != '\0')
	{
		if ((str[l] >= 'a' && str[l] <= 'z'))
			l++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("qwejbwq"));
	printf("%d\n", ft_str_is_lowercase("FGHJKK"));
	printf("%d\n", ft_str_is_lowercase(""));
}*/
