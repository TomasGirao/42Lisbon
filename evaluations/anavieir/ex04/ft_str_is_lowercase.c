/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavieir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 21:11:31 by anavieir          #+#    #+#             */
/*   Updated: 2023/08/03 22:39:56 by anavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		if (str[letter] >= 'a' && str[letter] <= 'z')
			letter++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	string[] = "helloworld";
	

	printf("%d", ft_str_is_lowercase(string));
	return (0);
}*/
