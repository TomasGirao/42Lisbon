/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: divalent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:54:31 by divalent          #+#    #+#             */
/*   Updated: 2023/08/07 17:00:40 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (src[i])
	{
		if (!(dest[n]))
		{
			dest[n] = src[i];
			i++;
		}
		n++;
	}
	return (dest);
}


int main(void)
{
	char a[] = "amigo";
	char b[20] = "Ola ";
	char *c;
    
	c = ft_strcat(b, a);
	printf("%s", c);
	return (0);
}
