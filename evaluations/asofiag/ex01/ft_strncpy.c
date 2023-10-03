/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asofia-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:16:50 by asofia-g          #+#    #+#             */
/*   Updated: 2023/08/05 14:12:20 by asofia-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char    in[]="Final123456";
	char    fi[]="Inicial";
	int	qt;

	qt = 5;

	printf("String de origem = %s\n",in);
	printf("String de destino antes da função = %s\n", fi);
	printf("String de destino apos a função = %s\n", ft_strncpy(fi, in, qt));
	printf("String de destino com strncpy = %s\n",strncpy(fi, in, qt));

	return (0);
}
*/
