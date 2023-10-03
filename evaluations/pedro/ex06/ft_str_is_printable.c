/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesaraiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:06:14 by pesaraiv          #+#    #+#             */
/*   Updated: 2023/07/30 14:42:52 by pesaraiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main()
{
	char	string[] = "Ola avaliador, tem um excelente dia!\t\t\t";
	int	resultado = ft_str_is_printable(string);
	if (resultado == 1)
	{
		printf("The string contains only printable characters.\n");
	}
	else
	{
		printf("The string contains non-printable characters.\n");
	}
	return 0;
}*/
