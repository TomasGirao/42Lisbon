/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:40:19 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/06 08:09:14 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     ft_error(char *str);
int     ft_len(char *str);
void    ft_str(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if ((ft_error(argv[1])) == 1)
			ft_str("Error\n");
		else
			printf("%s", "Go");
			//return (0); // go to function inside rush01.c file
	}
	else
		ft_str("Error\n");
	return (0);
}
