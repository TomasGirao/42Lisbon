/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:32:23 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/08 14:45:31 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
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
	char	s1[] = "Piscine";
	char	s2[] = "Pi2 lisboa";
	char	s3[] = "Piscine";

	printf("%d.\n", ft_strncmp(s1, s2, 3));
	printf("%d.\n", ft_strncmp(s1, s3, 5));
	printf("%d.\n", strncmp(s1, s2, 3));
	printf("%d.\n", strncmp(s1, s3, 5));
	return (0);
}*/
