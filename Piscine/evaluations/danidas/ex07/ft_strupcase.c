/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danida-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:49:13 by danida-s          #+#    #+#             */
/*   Updated: 2023/08/07 15:18:56 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		if (str[t] >= 'a' && str[t] <= 'z')
		{
			str[t] = str[t] - 32;
		}
		t++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "im big now!";
	printf("lowercase: %s \n", str);
	ft_strupcase(str);
	printf("uppercase: %s \n", str);
	return (0);
}/*
