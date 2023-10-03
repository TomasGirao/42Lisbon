/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njean-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:23:18 by njean-ma          #+#    #+#             */
/*   Updated: 2023/08/01 22:36:17 by njean-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	f;

	i = 0;
	f = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (f < nb && src[f] != '\0')
	{
		dest[i + f] = src[f];
		f++;
	}
	dest[i + f] = '\0';
	return (dest);
}
