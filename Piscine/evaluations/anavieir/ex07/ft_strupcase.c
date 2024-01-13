/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavieir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 22:21:56 by anavieir          #+#    #+#             */
/*   Updated: 2023/08/01 17:35:24 by anavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	upc;

	upc = 0;
	while (str[upc] != '\0')
	{
		if (str[upc] >= 'a' && str[upc] <= 'z')
			str[upc] = str[upc] - 32;
		upc++;
	}
	return (str);
}

/*int	main(void)
{
	char	string[] = "hii1!";

	printf("%s", ft_strupcase(string));
	return (0);
}*/
