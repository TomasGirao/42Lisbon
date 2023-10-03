/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavieir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:36:31 by anavieir          #+#    #+#             */
/*   Updated: 2023/08/01 17:36:33 by anavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	lwc;

	lwc = 0;
	while (str[lwc] != '\0')
	{
		if (str[lwc] >= 'A' && str[lwc] <= 'Z')
			str[lwc] = str[lwc] + 32;
		lwc++;
	}
	return (str);
}

/*int	main(void)
{
	char	string[] = "WaCKA WACk4";

	printf("%s", ft_strlowcase(string));
	return (0);
}*/
