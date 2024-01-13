/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagara- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:59:45 by mpagara-          #+#    #+#             */
/*   Updated: 2023/08/09 16:10:29 by mpagara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	int	number = 9;
	int	sqrt = ft_sqrt(number);

	if (sqrt != 0)
	{
		printf("A raiz de: %d e %d\n", number, sqrt);
	}
	else
	{
		printf("Nao existe raiz");
	}
	return (0);
}*/
