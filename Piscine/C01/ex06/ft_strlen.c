/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:42:02 by tomarque          #+#    #+#             */
/*   Updated: 2023/07/30 14:39:09 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}
/*
int	main(void)
{
	char	result;
	char	*p_str;

	p_str = "byee";
	result = ft_strlen(p_str) + 48;
	write(1, &result, 1);
	return (0);
}
*/
