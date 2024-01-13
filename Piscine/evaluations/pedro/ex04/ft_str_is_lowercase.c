/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesaraiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:54:39 by pesaraiv          #+#    #+#             */
/*   Updated: 2023/07/30 14:41:36 by pesaraiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main()
{
	char	string[] = "ola avaliador, tem um excelente dia!";
	int	resultado = ft_str_is_lowercase(string);
	
	if (resultado == 1)
	{
		printf("The string contains only lowercase alphabetical characters.\n");
	}
	else
	{
		printf("The string contains non-lowercase characters.\n");
	}
	return 0;
}*/
