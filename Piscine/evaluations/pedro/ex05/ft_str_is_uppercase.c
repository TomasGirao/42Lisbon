/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesaraiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:01:09 by pesaraiv          #+#    #+#             */
/*   Updated: 2023/07/30 14:41:55 by pesaraiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// sameee thing as last exercise copy paste again 
//#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main()
{
	char	string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int	resultado = ft_str_is_uppercase(string);
	
	if (resultado == 1)
	{
		printf("The string contains only uppercase alphabetical characters.\n");
	}
	else
	{
		printf("The string contains non-uppercase characters.\n");
	}
	return 0;
}*/
