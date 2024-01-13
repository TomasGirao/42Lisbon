/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunhenr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:16:46 by brunhenr          #+#    #+#             */
/*   Updated: 2023/08/07 15:54:43 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char *str);

int	main(void)
{
	char	svar[] = "bruno henrique";
	char	svar2[] = " lopes";

	printf("%u\n", ft_strlcat(svar, svar2, 5));
	printf("String concatenada: %s", svar);
	return (0);
}


unsigned int	ft_strlen(char *str)
{
	int	i; 

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	available_space;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	available_space = size - dest_len - 1;
	if (size == 0 || dest_len == 0)
	{
		return (src_len);
	}
	i = 0;
	while (src[i] != '\0' && i < available_space)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
