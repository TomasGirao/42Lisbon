/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: divalent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:56:12 by divalent          #+#    #+#             */
/*   Updated: 2023/08/07 17:03:03 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_size(char *dest, char *src)
{
	unsigned int	srcl;
	unsigned int	destl;
	unsigned int	totall;

	srcl = 0;
	destl = 0;
	while (dest[destl])
	{
		destl++;
	}
	while (src[srcl])
	{
		srcl++;
	}
	totall = srcl + destl;
	return (totall);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	i;
	unsigned int	totall;

	n = 0;
	i = 0;
	totall = ft_size(dest, src);
	while (src[i] && i < size)
	{
		if (!(dest[n]))
		{
			dest[n] = src[i];
			i++;
		}
		n++;
	}
	dest[n] = '\0';
	return (totall);
}


int main(void)
{
	char src[] = "amigo";
	char dest[20] = "Ola ";
    
	ft_strlcat(dest, src, 4);
	printf("%s", dest);
	return (0);
}
