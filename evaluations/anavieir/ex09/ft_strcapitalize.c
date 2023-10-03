/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavieir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:45:58 by anavieir          #+#    #+#             */
/*   Updated: 2023/08/04 15:40:54 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	all;
	int	letter;

	all = 0;
	letter = 1;
	while (str[all] != '\0')
	{
		if ((str[all] >= 'A' && str[all] <= 'Z') 
			|| (str[all] >= 'a' && str[all] <= 'z'))
		{
			if (letter && (str[all] >= 'a' && str[all] <= 'z'))
				str[all] = str[all] - 32;
			else if (!letter && (str[all] >= 'A' && str[all] <= 'Z'))
				str[all] = str[all] + 32;
			letter = 0;
		}
		else if (str[all] >= '0' && str[all] <= '9')
			letter = 0;
		else
			letter = 1;
		all++;
	}
	return (str);
}

int	main(void)
{
	char	string[] = "juSt 1kEEP swImMinG1";

	printf("%s\n", ft_strcapitalize(string));
	return (0);
}
