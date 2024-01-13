/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: divalent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:55:31 by divalent          #+#    #+#             */
/*   Updated: 2023/08/07 17:02:03 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (str[n] && to_find[i])
	{
		if (str[n] == to_find[i])
		{
			i++;
			n++;
		}
		else
			n++;
	}
	while (str[n])
	{
		to_find[i] = str[n];
		i++;
		n++;
		if (str[n] == '\0')
			return (to_find);
	}
	return (to_find);
}


int main(void)
{
	char str[] = "wiwi aaamigo es bue fixe";
	char to_find[20] = "amigo";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}
