/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 08:53:08 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/08/15 18:07:53 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	char	buffer[MAX];
	int	fd;
	int	i;

	if (ft_errors(argc) != 0)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	i = 0;
	while (read(fd, buffer, 1) > 0)
		write(1, buffer, 1);
	if (read(fd, buffer, 1) == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	close(fd);
	return (0);
}
