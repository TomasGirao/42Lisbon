/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavieir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:30:19 by anavieir          #+#    #+#             */
/*   Updated: 2023/08/03 22:34:47 by anavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	str;

	str = 0;
	while (str < n && src[str] != '\0')
	{
		dest[str] = src[str];
		str++;
	}
	while (str < n)
	{
		dest[str] = '\0';
		str++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*str = "Hello Duck";
	char	str2[20];

	printf("%s\n", ft_strncpy(str2, str, 25));
	return (0);
}*/
