/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:49:12 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/14 13:35:47 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ptchar(char *narq)
{
	int	i;

	i = 0;
	while (narq[i] != '\0')
		write (1, &narq[i++], 1);
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
		ptchar(argv[i++]);
	return (argc);
}
