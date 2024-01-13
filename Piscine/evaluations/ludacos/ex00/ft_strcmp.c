/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:47:38 by luda-cos          #+#    #+#             */
/*   Updated: 2023/08/06 09:46:15 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)

{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main()
{
	char	text1[] = "fake_natty";
	char	text2[] = "fake_natty";
	
	printf("%d", ft_strcmp(text1, text2));
	return (0);
}
