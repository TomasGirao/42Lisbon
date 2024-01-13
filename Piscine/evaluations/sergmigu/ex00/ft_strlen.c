/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmigu <sergmigu@student.42lisboa.com>    +#+  +:+     +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:12:12 by sergmigu          #+#    #+#             */
/*   Updated: 2023/07/29 10:12:51 by sergmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str ++;
	}
	return (i);
}
/*
int main()
{
    int i;
    char str[] = "12345678";
    i = ft_strlen(str);
    printf("%i", i);
    return (0);
}
*/
