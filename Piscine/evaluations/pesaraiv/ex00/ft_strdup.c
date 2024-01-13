/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesaraiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:31:41 by pesaraiv          #+#    #+#             */
/*   Updated: 2023/08/13 18:05:27 by pesaraiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*dup;

	length = ft_strlen(src);
	dup = (char *)malloc(length + 1);
	if (dup == NULL)
		return (NULL);
	ft_strcpy (dup, src);
	return (dup);
}

/*int main()
{
	char	*original;
	char	*dup;

	original = "Strdup!";
	dup = ft_strdup(original);
	if (dup != NULL)
	{
		printf("Original: %s\n", original);
		printf("Duplicated: %s\n", dup);
	}
	else
		printf("Memory allocation failed.\n");
	return(0);
}*/
