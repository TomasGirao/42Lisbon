/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpelissa <bpelissa@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:33:03 by bpelissa          #+#    #+#             */
/*   Updated: 2023/08/06 16:33:28 by bpelissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char	str0[] = "";
	char	str1[] = "123123a";
	char	str2[] = "123123";

	printf("%d %d %d", ft_str_is_numeric(str0), 
		ft_str_is_numeric(str1), ft_str_is_numeric(str2));
	return (0);
}*/
