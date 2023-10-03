/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-gui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:28:30 by lede-gui          #+#    #+#             */
/*   Updated: 2023/08/01 16:18:49 by lede-gui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 47 && str[i] < 58))
			return (0);
		i++;
	}
	return (1);
}

/*int	main()
{
	char	*str[] = {"1546", "8712138&4", "aijsaaifh", "1243135****"};
	int	i;

	i = 0;
	while (i < 4)
	{
		printf("A string #%i - %s  resulta em: %i\n",
			 i, str[i], ft_str_is_numeric(str[i]));
		i++;
	}
}*/
