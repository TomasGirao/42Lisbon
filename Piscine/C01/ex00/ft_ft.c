/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:02:38 by tomarque          #+#    #+#             */
/*   Updated: 2023/07/30 12:08:06 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	*pointer_nbr;
	int	nbr;

	nbr = 25;
	pointer_nbr = &nbr;
	ft_ft(pointer_nbr);
	printf("%d\n", nbr);
	return (0);
}
*/
