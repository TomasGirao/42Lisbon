/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <tomarque@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:23:49 by tomarque          #+#    #+#             */
/*   Updated: 2023/10/06 01:31:45 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (find[j] == '\0')
		return ((char *) str);
	while (str[i] != '\0')
	{
		while (str[i + j] == find[j] && str[i + j] != '\0' && i < len)
			j++;
		if (find[j] == '\0')
			return ((char *) str + i);
		i++;
		j = 0;
	}
	return (0);
}
