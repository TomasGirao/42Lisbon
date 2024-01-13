/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: divalent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:58:25 by divalent          #+#    #+#             */
/*   Updated: 2023/08/07 15:58:27 by divalent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	unsigned int	i;

	n = 0;
	i = 0;
	while (src[i] && i < nb)
	{
		if (!(dest[n]))
		{
			dest[n] = src[i];
			i++;
		}
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

/*
int main(void)
{
	char src[] = "amigo";
	char dest[20] = "Ola ";
	char *c;
    
	c = ft_strncat(dest, src, 4);
	printf("%s", c);
	return (0);
}
*/
