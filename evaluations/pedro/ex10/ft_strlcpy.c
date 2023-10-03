/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesaraiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:42:38 by pesaraiv          #+#    #+#             */
/*   Updated: 2023/07/30 15:17:58 by pesaraiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*int main() 
{
	char src[] = "Ola avaliador, tem um excelente dia!";
	char dest[10];

	unsigned int copied_length = ft_strlcpy(dest, src, sizeof(dest));

	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	printf("Length of Source String: %u\n", copied_length);

	return 0;
}*/
