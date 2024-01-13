/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdavid-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 01:17:45 by tdavid-d          #+#    #+#             */
/*   Updated: 2023/08/05 22:17:12 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	parapequeno(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	t;

	i = 0;
	t = 1;
	parapequeno(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && t)
		{
			if (t == 1)
				str[i] = str[i] - 32;
		}
		if ((str[i] >= 'a' && str[i] <= 'z') || 
			(str[i] >= 'A' && str[i] <= 'Z'))
			t = 0;
		else if (str[i] >= '0' && str[i] <= '9')
			t = 0;
		else 
			t = 1;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "ola, tuAFDAS**D*FAFdo bem? 42p*alavras qu**arenta-e-duas; c\\inquenta+e+um";

	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}
