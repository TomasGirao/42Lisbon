/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmano-cl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:16:54 by rmano-cl          #+#    #+#             */
/*   Updated: 2023/08/08 22:16:15 by rmano-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] >= 126)
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char s1[100] = "M \nria";

        printf("%d \n", ft_str_is_printable(s1));
	printf("%d \n", ft_str_is_printable(""));
	printf("%d \n", ft_str_is_printable("r54e657fo87"));
}
*/
