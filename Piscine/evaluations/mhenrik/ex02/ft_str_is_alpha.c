/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenrik- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:42:39 by mhenrik-          #+#    #+#             */
/*   Updated: 2023/08/07 16:40:15 by mhenrik-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)

{
	if (!str || !*str)
		return (1); 
	while (*str)
	{
		if (*str < 'A' || *str > 'z' || (*str > 'Z' && *str < 'a'))
			return (0); 
		str++;
	}
	return (1); 
}

//int	main(void)
//{
//	printf("Hello world returns: %d\n", ft_str_is_alpha("Hello World")); 
//	printf("HelloWorld returns: %d\n", ft_str_is_alpha("HelloWorld")); 
//	printf("Empty string returns: %d\n", ft_str_is_alpha("")); 
//}
