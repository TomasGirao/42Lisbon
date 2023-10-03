/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmigu <sergmigu@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:23:47 by sergmigu          #+#    #+#             */
/*   Updated: 2023/07/29 09:24:23 by sergmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*
int main()
{
    int a;
    int b;
    a = 321;
    b = -715;
    printf("%i %i\n", a, b);
    ft_swap(&a, &b);
     printf("%i %i\n", a, b);
}
*/
