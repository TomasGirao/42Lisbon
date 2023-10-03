/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunhenr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:55:50 by brunhenr          #+#    #+#             */
/*   Updated: 2023/08/07 15:46:21 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);


int	main(void)
{	
	char	svar[] = "Ola";
	char	svar2[] = " tudo bem?";
	char	svar3[] = "Ola";
	char	svar4[] = " tudo bem?";
	
	printf("ft: %s\n", ft_strcat(svar, svar2));
	printf("Original: %s\n", strcat(svar3, svar4));
	return (0);
}


char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[k])
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
