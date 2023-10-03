/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnuno-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:12:00 by dnuno-go          #+#    #+#             */
/*   Updated: 2023/08/06 16:12:03 by dnuno-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	return (k);
}

/*int	main(void)
{
	char	*esta = "this one";
	int	L = ft_strlen(esta);
	
	printf("The number is: %d\n", L);
	return (0);
}*/
