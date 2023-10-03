/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:53:44 by luda-cos          #+#    #+#             */
/*   Updated: 2023/08/05 18:21:44 by luda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	while (src[i] != '\0')
	{
		dest[counter] = src[i];
		i++;
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

/*int	main()
{
	char	text1[] = "vai dar merda";
	char	text2[] = ", vai nada";
	printf("%s", ft_strcat(text1, text2));
}*/
