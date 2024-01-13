/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcvin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:12:05 by marcvin2          #+#    #+#             */
/*   Updated: 2023/08/07 11:16:14 by marcvin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char	result[] = "mmarkinvinis";
	char	result1[] = "MARKINVINIS";
	char	result2[] = "markinVINIS";

	printf("RESULTADO: %s\n", ft_strlowcase(result));
	printf("RESULTADO: %s\n", ft_strlowcase(result1));
	printf("RESULTADO: %s\n", ft_strlowcase(result2));

	return (0);
}*/
