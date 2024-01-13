/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavieir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 21:28:49 by anavieir          #+#    #+#             */
/*   Updated: 2023/08/03 22:37:16 by anavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		if (str[letter] >= 'A' && str[letter] <= 'Z')
			letter++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	*string = " ";

	printf("%d", ft_str_is_uppercase(string));
	return (0);
}*/
