/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunhenr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:58:29 by brunhenr          #+#    #+#             */
/*   Updated: 2023/08/07 15:34:27 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);


int	main(void)
{
	char	svar[] = "curitiba";
	char	svar2[] = "curitibb";
	
	printf("%d\n", strcmp(svar, svar2));
	printf("%d", ft_strcmp(svar, svar2));
	return (0);
}


int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		s1++;
		s2++;
	}
	return (s1[i] - s2[i]);
}
