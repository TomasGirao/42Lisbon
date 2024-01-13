/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <tomarque@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:50:11 by tomarque          #+#    #+#             */
/*   Updated: 2023/10/06 00:56:11 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_p;
	const unsigned char	*src_p;

	dest_p = (unsigned char *)dest;
	src_p = (const unsigned char *)src;
	if (dest_p == src_p || n == 0)
		return (dest);
	while (n > 0)
	{
		*dest_p = *src_p;
		dest_p++;
		src_p++;
		n--;
	}
	return (dest);
}
