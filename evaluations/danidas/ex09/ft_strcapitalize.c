/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danida-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:27:11 by danida-s          #+#    #+#             */
/*   Updated: 2023/08/05 16:21:48 by danida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

void	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 0;
	ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (cap == 0)
				str[i] -= 32;
			cap = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			cap = 1;
		else
			cap = 0;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("wRONG: %s\n", str1);
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
        printf("Correct: %s\n", ft_strcapitalize(str));
	return (0);
}*/
