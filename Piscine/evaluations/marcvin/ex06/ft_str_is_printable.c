/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcvin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:33:04 by marcvin2          #+#    #+#             */
/*   Updated: 2023/08/07 15:28:11 by marcvin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] > 32 && str[i] < 126)
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("RESULTADO: %d\n", ft_str_is_printable(""));
	return (0);
}
*/
