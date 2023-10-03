/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee-rod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:52:19 by alee-rod          #+#    #+#             */
/*   Updated: 2023/08/04 16:52:23 by alee-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_length;
	unsigned int	i;

	i = 0;
	dest_length = strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
    unsigned int	nb;
		
		char	dest[40] = "aasdfsdny";
    char	src[] = "Freaky";
    nb = 8;
    printf("String Concatenated to n: %s\n", ft_strncat(dest, src, nb));
    return (0);
}
*/