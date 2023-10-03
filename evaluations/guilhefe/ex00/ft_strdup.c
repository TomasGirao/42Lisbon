/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:51:38 by guilhefe          #+#    #+#             */
/*   Updated: 2023/08/12 16:51:41 by guilhefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	i = ft_strlen(str);
	dest = (char *)malloc(i * sizeof(char) + 1);
	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main()
{
	char *dest;
    char *str = "Hello World!";
    
    dest = ft_strdup(str);
    write(1, dest, 15);
    return 0;
}
*/
