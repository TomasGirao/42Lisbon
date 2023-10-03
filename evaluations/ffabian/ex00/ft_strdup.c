/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffabian- <ffabian-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:04:43 by ffabian-          #+#    #+#             */
/*   Updated: 2023/08/16 03:02:05 by ffabian-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*tmp;

	tmp = (char *) malloc(ft_strlen(src) + 1);
	if (tmp != NULL)
		ft_strcpy(tmp, src);
	return (tmp);
}
/*
int	main(void)
{
	char	str[] = "hola";
	char	*str2;
	
	str2 = ft_strdup(str);	
	printf("La string original es: %s y su direccion es %p\n", str, str);
	printf("La string strdup es: %s y su direccion es %p\n", str2, str2);
	printf("%lu\n%lu\n", sizeof (str), sizeof (str2));
}
*/
