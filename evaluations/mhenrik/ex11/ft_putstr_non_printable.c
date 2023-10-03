/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenrik- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:42:39 by mhenrik-          #+#    #+#             */
/*   Updated: 2023/08/09 20:28:59 by mhenrik-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hexmap; 
	char	hex[3];

	hexmap = "0123456789abcdef";
	hex[0] = '\\'; 
	if (!str)
		return ;
	while (*str)
	{
		if (*str < 0x20 || *str > 0x7e)
		{
			hex[1] = hexmap[((*str >> 4) & 0xF)];
			hex[2] = hexmap[(*str & 0xF)];
			write(1, hex, 3);
		}
		else
			write(1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char	*src = "Hello\n there, \e\t \rVenus_~";
	ft_putstr_non_printable(src); 
}*/
