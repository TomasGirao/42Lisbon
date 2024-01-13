/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <tomarque@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:37:45 by tomarque          #+#    #+#             */
/*   Updated: 2023/10/06 00:56:43 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			s_size;
	size_t			d_size;

	i = 0;
	j = ft_strlen(dest);
	d_size = (size_t)ft_strlen(dest);
	s_size = (size_t)ft_strlen(src);
	if (size == 0 || size <= d_size)
		return (s_size + size);
	while (src[i] && i < size - d_size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (d_size + s_size);
}
