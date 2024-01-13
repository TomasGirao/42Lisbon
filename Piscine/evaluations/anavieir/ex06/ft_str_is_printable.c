/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavieir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 21:55:40 by anavieir          #+#    #+#             */
/*   Updated: 2023/08/03 22:47:53 by anavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_printable(char *str);

int	ft_str_printable(char *str)
{
	int	cha;

	cha = 0;
	while (str[cha] != '\0')
	{
		if (str[cha] >= 32 && str[cha] <= 126)
			cha++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	*string = "";

	printf("%d", ft_str_printable(string));
	return (0);
}*/
