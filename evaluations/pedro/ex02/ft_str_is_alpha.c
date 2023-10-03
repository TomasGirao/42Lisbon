/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesaraiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:14:20 by pesaraiv          #+#    #+#             */
/*   Updated: 2023/07/30 14:37:48 by pesaraiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main()
{
	char	string[] = "Ola avaliador, tem um excelente dia!";
	int	resultado = ft_str_is_alpha(string);

	if (resultado == 1)
	{
		printf("The string contains only alphabetical characters.\n");
	}
	else
	{
		printf("The string contains non-alphabetical characters.\n");
	}
	return 0;
}*/
