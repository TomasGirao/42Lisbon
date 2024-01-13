/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:24:11 by wmarinho          #+#    #+#             */
/*   Updated: 2023/08/09 11:44:36 by wmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		t++;
	}
	return (t);
}
/*
int	main(void)
{
	char	str[] = "Testando";
	
	printf("%d", ft_strlen(str));
}*/
