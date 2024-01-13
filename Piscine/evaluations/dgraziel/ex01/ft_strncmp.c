/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgraziel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:08:27 by dgraziel          #+#    #+#             */
/*   Updated: 2023/08/12 19:02:54 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < (n - 1) && s1[i] == s2[i])
		i++;
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}

int	main(void)
{
	unsigned int j;
	char s1[] = "denise";
	char s2[] = "denize";
	j = 0;
	printf("%d", ft_strncmp(s1, s2, j));
}
