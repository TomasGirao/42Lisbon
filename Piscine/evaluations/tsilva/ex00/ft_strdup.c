/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:16:42 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/08/16 15:35:35 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		count;

	count = 0;
	while (src[count] != 0)
	{
		count++;
	}
	ptr = (char *)malloc((count + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	else
	{
		count = 0;
		while (src[count] != 0)
		{
			ptr[count] = src[count];
			count++;
		}
		ptr[count] = 0;
	}
	return (ptr);
}
/*
int	main(int argc, char **argv)
{
	int	i;
	char	*ptr;

	i = 0;
	if (argc == 2)
	{
		ptr = ft_strdup(argv[1]);
		while (ptr[i] != 0)
		{
			write(1, &ptr[i], 1);
			i++;
		}
	}
	else 
		return (0);
}*/
