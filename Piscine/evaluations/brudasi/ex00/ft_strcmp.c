/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:02:22 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/08 18:12:57 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "Brunno";
	char	s2[] = "Brunno";
	char	s3[] = "Bruulte";
	int	r1;
	int	r2;

	r1 = ft_strcmp(s1, s2);
	r2 = ft_strcmp(s1, s3);
	printf("%d.\n", r1);
	printf("%d.\n", r2);
}*/
