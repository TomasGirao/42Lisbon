/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 17:23:33 by luda-cos          #+#    #+#             */
/*   Updated: 2023/08/06 09:48:04 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (i < n) && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main()
{
	unsigned int	size = 7;
	char	text1[] = "fake_natty";
	char    text2[] = "fake_nztty";

	printf("%d", ft_strncmp(text1, text2, size));
	return (0);
}
