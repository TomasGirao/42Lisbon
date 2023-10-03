/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-gui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:24:48 by lede-gui          #+#    #+#             */
/*   Updated: 2023/08/01 16:17:59 by lede-gui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] < 123 && str[i] > 96) || (str[i] < 91 && str[i] > 64)))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str[] = {"Piscine", "123ksasfja", "AHSDHACXM",
 "asfasfas", "_*^\'[/]"};
	int	i;

	i = 0;
	while (i < 5)
	{
		printf("A string #%i - %s resulta em: %i\n",
 i, str[i], ft_str_is_alpha(str[i]));
		i++;
	}
}*/
