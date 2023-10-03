/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:52:25 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/07 15:57:05 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i] && i < (n - 1))
		i++;
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	str1[] = "lisboa";
	char	str2[] = "liscoa";
	unsigned int	n;

	n = 0;
	printf("%d\n", ft_strncmp(str1, str2, n));
	printf("%d", strncmp(str1, str2, n));
	return (0);
}
*/
