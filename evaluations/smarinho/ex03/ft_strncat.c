/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarinho <smarinho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:34:22 by smarinho          #+#    #+#             */
/*   Updated: 2023/08/04 16:08:13 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_len;

	i = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0') 
	{
		dest_len++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[25] = "hello, my name is: ";
	char	*src;
	int		nb;

	src = "Saile Marinho";
	nb = 5;
	ft_strncat(dest, src, nb);
	printf("%s\n", dest);
	return (0);
}
