/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrasile <tbrasile@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:09:53 by tbrasile          #+#    #+#             */
/*   Updated: 2023/07/30 11:14:35 by tbrasile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	numero1;
	int	numero2;

	numero1 = 48;
	numero2 = 57;
	while (numero1 <= numero2)
	{
		write(1, &numero1, 1);
		numero1++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
