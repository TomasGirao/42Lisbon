/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asofia-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 08:55:49 by asofia-g          #+#    #+#             */
/*   Updated: 2023/08/04 18:07:06 by asofia-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char	inicial[]="ini";
	char	final[]="fim";

	printf("String de origem = %s\n",inicial);
	printf("String de destino antes da função = %s\n", final);
	printf("String de destino apos a função = %s\n", ft_strcpy(final, inicial));
	printf("String de destino com strcpy = %s\n", strcpy(final, inicial));

	return (0);
}
*/
