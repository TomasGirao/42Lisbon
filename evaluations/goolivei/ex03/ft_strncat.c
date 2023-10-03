/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: goolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:28:38 by goolivei          #+#    #+#             */
/*   Updated: 2023/08/10 15:28:40 by goolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*original_dest;

	original_dest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	return (original_dest);
}

/*int main(void)
{
    char test1[100] = "super mario ";
    char test2[] = "on the nitendo 64";
    unsigned int nb = 10;
    
    	ft_strncat(test1, test2, nb);
	printf("this: %s\n", test1);
	return(0);
}*/
