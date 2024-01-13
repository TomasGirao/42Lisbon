/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:21:25 by ccavagli          #+#    #+#             */
/*   Updated: 2023/08/08 19:35:06 by ccavagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != 0)
	{
		n++;
		str++;
	}
	return (n);
}
/*
int	main(void)
{
	char	s[8];
	int		x;

	s = "bonjour";
	x = ft_strlen(s);
	printf("%d", x);
	return (0);
}*/
