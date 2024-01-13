/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcota-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:34:29 by dcota-pa          #+#    #+#             */
/*   Updated: 2023/07/30 10:38:36 by dcota-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
/*
int	main(void)
{	
	int n = 1;
	int n2 = 9;
	int *pN = &n;
	int *pN2 = &n2;

	printf("%d",n);
	printf("%d",n2);
	ft_swap(pN, pN2);
	printf("%d",n);
        printf("%d",n2);

	return (0);
}*/
