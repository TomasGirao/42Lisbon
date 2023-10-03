/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:46:34 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/08/15 18:08:22 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <unistd.h>

void    ft_putst(char *str)
{
        int     len;

        len = 0;
        while (str[len] != '\0')
                len++;
        write(1, str, len);
}

int	ft_errors(int argc)
{
	if (argc == 1)
	{
		ft_putst("File name missing.\n");
		return 1;
	}
	else if (argc > 2)
	{
		ft_putst("Too many arguments.\n");
		return 2;
	}
	return (0);
}
