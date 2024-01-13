/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesaraiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:41:43 by pesaraiv          #+#    #+#             */
/*   Updated: 2023/07/30 14:40:37 by pesaraiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main()
{
	char	string[] = "1234567890";
	int	resultado = ft_str_is_numeric(string);

	if (resultado == 1)
	{
		printf("The string contains only digits.\n");
	}
	else
	{
		printf("The string contains non-digit characters.\n");
	}
	return 0;
}*/
