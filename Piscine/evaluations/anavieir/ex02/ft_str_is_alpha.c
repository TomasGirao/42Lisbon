/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavieir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:51:24 by anavieir          #+#    #+#             */
/*   Updated: 2023/08/03 22:41:53 by anavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	alph;

	alph = 0;
	while (str[alph] != '\0')
	{
		if (str[alph] >= 'A' && str[alph] <= 'Z')
			alph++;
		if (str[alph] >= 'a' && str[alph] <= 'z')
			alph++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char str[] = "Welp!";

	printf("%d", ft_str_is_alpha(str));
	return (0);
}*/
