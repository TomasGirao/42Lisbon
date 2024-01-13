/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavieir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:16:28 by anavieir          #+#    #+#             */
/*   Updated: 2023/08/03 22:40:34 by anavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	dig;

	dig = 0;
	while (str[dig] != '\0')
	{
		if (str[dig] >= '0' && str[dig] <= '9')
			dig++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	string[] = "";

	printf("%d\n", ft_str_is_numeric(string));
	return (0);
}*/
