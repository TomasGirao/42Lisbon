/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:19:44 by pedalexa          #+#    #+#             */
/*   Updated: 2023/08/07 16:21:23 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	n = n - 1;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && n > 0)
	{
		i++;
		n--;
	}
	return (s1[i] - s2[i]);
}

int main ()
{
	unsigned int n = 0;
        char s1[] = "420";
        char s2[] = "520";
        printf("%d", ft_strncmp(s1, s2, n));
	printf("\n%d", strncmp(s1, s2, n));

}
