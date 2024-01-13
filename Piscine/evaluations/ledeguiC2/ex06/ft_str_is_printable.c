/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-gui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 22:02:45 by lede-gui          #+#    #+#             */
/*   Updated: 2023/08/01 18:17:46 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	char	*str[] ={ "auohguh", "", "\njiajsijf", "\tfasjfa"};
	int	i;

	i = 0;
	while (i < 4)
	{
		printf("A string #%i - %s resulta em: %i\n", i,
			 str[i], ft_str_is_printable(str[i]));
		i++;
	}
}
