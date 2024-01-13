/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenrik- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:42:39 by mhenrik-          #+#    #+#             */
/*   Updated: 2023/08/07 18:53:42 by mhenrik-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)

{
	if (!str || !*str)
		return (1); 
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0); 
		str++;
	}
	return (1); 
}
/*
int	main(void)
{
	printf("Hello world returns: %d\n", ft_str_is_lowercase("helloworld")); 
	printf("HelloWorld returns: %d\n", ft_str_is_lowercase("HelloWorld")); 
	printf("Empty string returns: %d\n", ft_str_is_lowercase("")); 
}*/
