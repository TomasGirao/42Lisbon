/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcvin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:05:54 by marcvin2          #+#    #+#             */
/*   Updated: 2023/08/07 15:21:02 by marcvin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
//#include<stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*int main(void)
{

	char result[] = "markinVINIS";
	char result1[] = "MARKINVINIS";
	char result2[] = "markinvinis";

	printf("%s\n",ft_strupcase(result));
	printf("%s\n",ft_strupcase(result1));
	printf("%s\n",ft_strupcase(result2));

	return (0);	
}*/
