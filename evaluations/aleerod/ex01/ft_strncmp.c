/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee-rod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:48:32 by alee-rod          #+#    #+#             */
/*   Updated: 2023/08/04 14:48:37 by alee-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (0);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "aasdfsdny";
	char	s2[] = "aaaandysy";
	int	n;

	n = 3;
	printf ("String Comparison to n: %d\n", ft_strncmp(s1, s2, n));
}
*/