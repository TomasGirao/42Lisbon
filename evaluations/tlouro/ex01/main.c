/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 08:53:08 by tlouro-c          #+#    #+#             */
/*   Updated: 2023/08/16 01:59:52 by tlouro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>

int	main(int argc, char *argv[])
{
	char	buffer[MAX];
	char	*basenamec;
	int		fd;
	int		i;

	while (argc == 1)
		continue ;
	i = 1;
	while (i <= argc - 1)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			basenamec = basename(argv[i]);
			ft_putfourstr(argv[0], ": ", basenamec, ": ");
			ft_putstr(strerror(errno));
			ft_putstr("\n");
		}
		while (read(fd, buffer, 1) > 0)
			write(1, buffer, 1);
		close(fd);
		i++;
	}
	return (0);
}
