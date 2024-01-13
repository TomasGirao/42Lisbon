/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <tomarque@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:37:22 by tomarque          #+#    #+#             */
/*   Updated: 2023/10/06 00:13:21 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer;

	pointer = s;
	while (n > 0)
	{
		*pointer = c;
		n--;
		pointer++;
	}
	return (s);
}
