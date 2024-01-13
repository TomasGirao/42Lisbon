/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenrik- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:42:39 by mhenrik-          #+#    #+#             */
/*   Updated: 2023/08/11 20:40:30 by mhenrik-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)

{
	if (!str || !*str)
		return (1); 
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0); 
		str++;
	}
	return (1); 
}
/*
int	main(void)
{
	printf("Hello world returns: %d\n", ft_str_is_numeric("Hello World")); 
	printf("024917909: %d\n", ft_str_is_numeric("024917909")); 
	printf("Empty string returns: %d\n", ft_str_is_numeric("")); 
}*/
