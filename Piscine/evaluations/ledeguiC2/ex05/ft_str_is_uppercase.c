/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-gui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:45:28 by lede-gui          #+#    #+#             */
/*   Updated: 2023/08/01 16:20:19 by lede-gui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 64 && str[i] < 91))
			return (0);
		i++;
	}
	return (1);
}

/*int	main()
{
	char	*str[] = {"", "bhhabfjhbfa", "FAYGFASGFGAJ",
				 "HUASHFuhsauhfuaHUHUD", "1234567890"};
	int	i;

	i = 0;
	while (i < 5)
	{
		printf("A string #%i - %s resulta em: %i\n",
			 i, str[i], ft_str_is_uppercase(str[i]));
		i++;
	}
}*/
