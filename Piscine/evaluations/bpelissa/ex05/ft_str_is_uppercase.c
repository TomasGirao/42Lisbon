/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpelissa <bpelissa@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:15:40 by bpelissa          #+#    #+#             */
/*   Updated: 2023/08/06 19:16:03 by bpelissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char	str0[] = "OPA";
	char	str1[] = "opa";
	char	str2[] = "";

	printf("%d %d %d", ft_str_is_uppercase(str0), 
		ft_str_is_uppercase(str1), ft_str_is_uppercase(str2));
	return (0);
}*/
