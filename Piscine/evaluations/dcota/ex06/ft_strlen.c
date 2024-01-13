/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcota-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:52:24 by dcota-pa          #+#    #+#             */
/*   Updated: 2023/07/30 10:49:29 by dcota-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter ++;
	}
	return (counter);
}
/*
int     main(void)
{
        char	*pString;
	char	n_chars;
        
	pString = "Hello";
	n_chars = ft_strlen(pString) + '0';
        write (1, &n_chars , 1);
        return (0);
}*/
