/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpelissa <bpelissa@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:56:18 by bpelissa          #+#    #+#             */
/*   Updated: 2023/08/06 18:56:41 by bpelissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main(void)
{
	char	str0[] = "ola";
	char	str1[] = "";
	char	str2[] = "OlA";

	printf("%d %d %d", ft_str_is_lowercase(str0), 
		ft_str_is_lowercase(str1), ft_str_is_lowercase(str2));
	return (0);
}*/
