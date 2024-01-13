/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee-rod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:16:14 by alee-rod          #+#    #+#             */
/*   Updated: 2023/08/06 12:02:43 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (s1[i] = s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[] = "many";
	char	s2[] = "mandysy";

	printf ("String Comparison: %d\n", ft_strcmp (s1, s2));
	return (0);
}

