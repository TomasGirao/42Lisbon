/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:13:17 by rcastelo          #+#    #+#             */
/*   Updated: 2023/08/10 12:52:39 by rcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != 0)
		i++;
	dest = malloc(i + 1);
	if (dest == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int						i;
	struct s_stock_str		*structarray;

	structarray = (struct s_stock_str *)malloc((ac + 1) 
			* sizeof(struct s_stock_str));
	if (structarray == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		structarray[i].size = ft_strlen(av[i]);
		structarray[i].str = av[i];
		structarray[i].copy = ft_strdup(av[i]);
		i++;
	}
	structarray[ac].size = 0;
	structarray[ac].str = NULL;
	structarray[ac].copy = NULL;
	return (structarray);
}
/*
int	main(void)
{
	char					**av;
	int						i;
	struct s_stock_str		*output;

	av = malloc((3 + 1) * 8);
	av[0] = "Primeira";
	av[1] = "Segunda";
	av[2] = "Terceira";
	av[3] = NULL;
	output = ft_strs_to_tab(3, av);
	i = 0;
	while (i <= 3)
	{
		printf("str = %s\tsize = %i\tcopy = %s\n",
	       		output[i].str, output[i].size, output[i].copy);
		i++;
	}
	return (0);
}
*/
