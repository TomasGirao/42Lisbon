/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:58:12 by sergmigu          #+#    #+#             */
/*   Updated: 2023/07/30 15:58:16 by sergmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	check_fim(char *s1, char *s2)
{
	int	check;

	check = 0;
	if (*s1 != '\0' && *s2 == '\0')
	{
		check = *s1;
	}
	else if (*s1 == '\0' && *s2 != '\0')
	{
		check = -*s2;
	}
	return (check);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	check;

	check = 0;
	while (*s1 != '\0' && *s2 != '\0' && check == 0)
	{
		if (check == 0)
		{
			if (*s1 > *s2)
			{
				check = *s1 - *s2;
			}
			else if (*s2 > *s1)
			{
				check = *s1 - *s2;
			}
		}
		s1 ++;
		s2 ++;
	}
	if (check == 0)
	{
		check = check_fim(s1, s2);
	}
	return (check);
}
/*
int main()
{
	char *s1 = "ravioli";
	char *s2 = "ravioli0";
	int	i;
	
	i = ft_strcmp(s1, s2);
	printf("%i", i);
	return 0;
}
*/
