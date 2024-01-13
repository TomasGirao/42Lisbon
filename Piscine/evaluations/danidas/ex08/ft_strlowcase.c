/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danida-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:46:31 by danida-s          #+#    #+#             */
/*   Updated: 2023/08/01 12:28:53 by danida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		if (str[t] >= 'A' && str[t] <= 'Z')
		{
			str[t] = str[t] + 32;
		}
		t++;
	}
	return (str);
}
/*
int	main(void)
{
	char    str[] = "IM SMALL NOW";
	printf("uppercase: %s \n", str);
	ft_strlowcase(str);
	printf("lowercase: %s \n", str);
	return (0);
}*/
