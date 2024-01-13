/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanzovo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 20:43:18 by vsanzovo          #+#    #+#             */
/*   Updated: 2023/07/27 11:06:04 by vsanzovo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	else 
	{
		write (1, "P", 1);
	}
}

/*int	main(void)
{
	int	n;

	n = -1;
	ft_is_negative (n);
	return (0);
}*/
