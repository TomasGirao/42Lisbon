/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesaraiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:22:31 by pesaraiv          #+#    #+#             */
/*   Updated: 2023/07/30 15:19:42 by pesaraiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}

/*int main() 
{
    char source[] = "Ola avaliador, tudo bem?";
    char destination[25];

    ft_strcpy(destination, source);
    
    printf("Source: %s\n", source);
    printf("Destination: %s\n\n", destination);
    return 0;
}*/
