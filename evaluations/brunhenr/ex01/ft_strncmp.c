/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunhenr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:43:29 by brunhenr          #+#    #+#             */
/*   Updated: 2023/08/07 15:38:02 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


int	ft_strncmp(char *s1, char *s2, unsigned int n);


int	main(void)
{
	char var[] = "lisboa";
	char var2[] = "liscoa";

	printf("%d\n", ft_strncmp(var, var2, 3));

	printf("%d", strncmp(var, var2, 3));
	return (0);
}


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
