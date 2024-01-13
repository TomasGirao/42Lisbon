/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenrik- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:42:39 by mhenrik-          #+#    #+#             */
/*   Updated: 2023/08/07 19:31:10 by mhenrik-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)

{
	if (!str || !*str)
		return (1); 
	while (*str)
	{
		if (*str < 0x20 || *str > 0x7e)
			return (0); 
		str++;
	}
	return (1); 
}
/*
int	main(void)
{
	printf("HEL LOW&ORLD~: %d\n", ft_str_is_printable("HEL LOW&ORLD~")); 
	printf("Same with LF: %d\n", ft_str_is_printable("HEL LOW&ORLD~\n")); 
	printf("Empty string returns: %d\n", ft_str_is_printable("")); 
}*/
