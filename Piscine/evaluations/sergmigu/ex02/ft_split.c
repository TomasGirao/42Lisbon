/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:28:05 by sergmigu          #+#    #+#             */
/*   Updated: 2023/08/14 13:28:07 by sergmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (c == sep[i])
		{
			return (1);
		}
		i ++;
	}
	return (0);
}

int	count_words_sep(char *str, char *sep)
{
	int	count;
	int	check;
	int	i;

	check = 1;
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_sep(str[i], sep) == 1)
		{
			check = 1;
		}
		else if (check == 1)
		{
			count ++;
			check = 0;
		}
		i ++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *sep)
{
	int	i;

	i = 0;
	while ((check_sep(str[i], sep) == 0) && (str[i] != '\0'))
	{
		i++;
	}
	return (i);
}

int	add_string(char *aux, char *str, char *charset)
{
	int	j;
	int	lenght;
	int	read;

	read = 0;
	while (check_sep(str[read], charset) == 1)
	{
		read ++;
	}
	lenght = ft_strlen_sep(&str[read], charset);
	j = 0;
	while (j < lenght)
	{
		aux[j] = str[read];
		read ++;
		j ++;
	}
	while (check_sep(str[read], charset) == 1)
	{
		read ++;
	}
	return (read);
}

char	**ft_split(char *str, char *charset)
{
	char	**aux;
	int		i;
	int		read;
	int		lenght;

	aux = (char **)malloc(sizeof(char *) * (count_words_sep(str, charset) + 1));
	if (aux == NULL)
		return (NULL);
	aux[count_words_sep(str, charset)] = NULL;
	read = 0;
	i = 0;
	while (i < count_words_sep(str, charset))
	{
		lenght = ft_strlen_sep(&str[read], charset);
		aux[i] = (char *) malloc(sizeof(char) * (lenght + 1));
		if (aux[i] == NULL)
			return (NULL);
		aux[i][lenght] = '\0';
		read = read + add_string(aux[i], &str[read], charset);
		i ++;
	}
	return (aux);
}
/*
int	main()
{
	char	** aux;
	char	*str = "7uRMYbRtVO        rhrkktUiza6HyRSAmWO4 pYICp     i" ;
	char	*sep = "PMIE1x";
	int 	i;

	aux = ft_split(str, sep);
	i = 0;
	if (aux != NULL)
	{
		while (aux[i] != NULL)
		{
			printf("%s\n",aux[i]);
			aux ++;
		}
	}
	return (0);
}
*/
