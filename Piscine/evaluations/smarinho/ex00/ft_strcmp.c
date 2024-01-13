/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarinho <smarinho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:39:59 by smarinho          #+#    #+#             */
/*   Updated: 2023/08/02 21:11:51 by smarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if ((s1[i] < s2[i]) || (s1[i] > s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "hello!";
	s2 = "hello.";
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
} */
