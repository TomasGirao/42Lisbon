/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <tomarque@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:01:24 by tomarque          #+#    #+#             */
/*   Updated: 2023/10/06 01:50:18 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*array;

	array = NULL;
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (((unsigned long long)nmemb * (unsigned long long)size) > UINT_MAX)
		return (0);
	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	size_t	i = ft_strlen((const char *) array);
	array = ft_memset(array, 0, i);
	// ft_bzero(array, ft_strlen((const char *) array));
	return (array);
}
