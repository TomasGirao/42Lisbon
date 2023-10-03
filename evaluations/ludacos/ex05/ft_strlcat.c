/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:36:09 by luda-cos          #+#    #+#             */
/*   Updated: 2023/08/05 21:30:11 by luda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;

	i = 0;
	j = 0;
	count = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < size)
	{
		i++;
	}
	count = (i + j + 1);
	return (count);
}

/*int	main()
{
	char	valordest[] = "123123";
	char	valorsrc[] = "456asdas7";
	unsigned int	valorsize = 3;

	printf("%d", ft_strlcat(valordest, valorsrc, valorsize));
}*/
