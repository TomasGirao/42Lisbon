/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenrik- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:42:39 by mhenrik-          #+#    #+#             */
/*   Updated: 2023/08/14 22:03:57 by mhenrik-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (!str || !*str)
		return (1); 
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			return (0); 
		str++;
	}
	return (1); 
}
/*
int	main(void)
{
	printf("HELLOWORLD: %d\n", ft_str_is_uppercase("HELLOWORLD")); 
	printf("HelloWorld: %d\n", ft_str_is_uppercase("HelloWorld")); 
	printf("Empty string returns: %d\n", ft_str_is_uppercase("")); 
}*/
