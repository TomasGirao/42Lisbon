/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:14:45 by gumarque          #+#    #+#             */
/*   Updated: 2023/08/05 19:31:00 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 1 && str[i] < 32) || (str[i] == 127))
			return (0);
		++i;
	}
	return (1);
}

int	main()
{
	char	src[] = "sads asdadadsa";
	printf("%d\n", ft_str_is_printable(src));
}
