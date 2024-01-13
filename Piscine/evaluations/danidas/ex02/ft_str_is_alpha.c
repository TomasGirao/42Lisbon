/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danida-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:01:27 by danida-s          #+#    #+#             */
/*   Updated: 2023/08/05 13:18:10 by danida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A' && str[a] <= 'Z')
			|| (str[a] >= 'a' && str[a] <= 'z'))
			a++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("\n%d", ft_str_is_alpha("abdqc"));
	printf("\n%d", ft_str_is_alpha("a93299"));
	printf("\n%d", ft_str_is_alpha("\0"));
}*/
