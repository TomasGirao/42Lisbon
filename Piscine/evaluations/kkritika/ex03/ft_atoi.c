/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkritika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:01:25 by kkritika          #+#    #+#             */
/*   Updated: 2023/08/08 19:48:53 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	outcome;
	int	i;
	int	sign;

	outcome = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		outcome = ((outcome * 10) + (str[i] - 48));
		i++;
	}
	return (outcome * sign);
}

int	main()
{
	char	a[] = " ---+--+-12112003bg4674";
 	printf("%s\n", a);
	printf("%d\n", ft_atoi(a));
	return (0);
}
