/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro3 <jopedro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:24:36 by jopedro3          #+#    #+#             */
/*   Updated: 2023/08/04 18:01:59 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	num;

	num = nb;
	if (num <= 0)
		return (0);
	if (num == 1)
		return (1);
	i = 2;
	while (i * i <= num)
	{
		if (i * i == num)
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	printf("%i", ft_sqrt(4));
}
