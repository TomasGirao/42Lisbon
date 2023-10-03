/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunhenr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:48:58 by brunhenr          #+#    #+#             */
/*   Updated: 2023/08/07 15:50:28 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);


int	main(void)
{
	char svar[] = "Oi, meus amigos! Vamos codar!";
	char svar2[] = "Vam";

	printf("%s\n", strstr(svar, svar2));
	printf("%s\n", ft_strstr(svar, svar2));
}


char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		k = 0;
		while (str [i + k] != '\0' && str [i + k] == to_find[k])
		{
			if (to_find[k + 1] == '\0')
				return (&str[i]);
			k++;
		}
		i++;
	}
	return (0);
}
