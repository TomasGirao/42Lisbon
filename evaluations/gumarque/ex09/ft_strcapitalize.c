/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:48:17 by gumarque          #+#    #+#             */
/*   Updated: 2023/08/05 19:28:45 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			&& (!(str[i - 1] < 'A' || str[i - 1] > 'Z')
				|| !(str[i - 1] < 'a' || str[i - 1] > 'z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			str[i] = str[i] + 32;
		}
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (str[i - 1] < 'a' || str[i - 1] > 'z')
			&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			&& !(str[i - 1] >= '0' && str[i - 1] <= '9'))
		{
			str[i] = str[i] - 32;
		}
		++i;
	}
	return (str);
}

int	main()
{
	char	src[] = "saLut, comment tu vas ? 42mo7s quarante-deux; cinquante+et+un";
	
	printf("String before: %s\n", src);
	ft_strcapitalize(src);
	printf("String after: %s\n", src);
}
