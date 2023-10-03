/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpelissa <bpelissa@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:01:42 by bpelissa          #+#    #+#             */
/*   Updated: 2023/08/02 22:01:50 by bpelissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
	char	str[] = "hola12345amigo";
	char	str1[] = "holaHOLA";
	char	str2[] = "";

	printf("%d %d %d", ft_str_is_alpha(str), 
		ft_str_is_alpha(str1), ft_str_is_alpha(str2));
	return (0);
}*/
