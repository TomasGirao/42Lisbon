/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:23:17 by gumarque          #+#    #+#             */
/*   Updated: 2023/08/05 15:31:23 by gumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		else
			i++;
	}
	return (str);
}
/*
int	main()
{
	char	src[] = "azazazAZAZ-==-121@!#@51%^4%^*($%$aasd231";
	
	printf("%s\n", ft_strupcase(src));
}*/
