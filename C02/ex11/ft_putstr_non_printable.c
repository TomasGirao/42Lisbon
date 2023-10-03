/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 03:01:09 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/12 03:01:12 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hexa;
	int		i;

	i = 0;
	hexa = "0123456789abcdef";
	while (str[i])
	{
		if (ft_printable(str[i]) == 1)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			write(1, &hexa[str[i] / 16], 1);
			write(1, &hexa[str[i] % 16], 1);
		}
		i++;
	}
}
/*
int main (void)
{
	ft_putstr_non_printable("");
	write(1, "\n", 1);
	ft_putstr_non_printable("Tenho\nmuito \nsono");
	write(1, "\n", 1);
	ft_putstr_non_printable("Tenho\0 muito\t son\v\to");
	return (0);
}
*/
