/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 22:43:43 by guilhefe          #+#    #+#             */
/*   Updated: 2023/08/17 15:47:51 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	x;
	int	i;

	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		x++;
		i++;
	}
	return (x);
}

char	*ft_strcat(char *dest, char *src)

{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

int	sizetotal(int w, int size, char **strs, char *sep)
{
	int	x;

	x = ft_strlen(sep) * (size - 1);
	while (size > w)
	{
		x = x + ft_strlen(strs[w]);
		w++;
	}
	return (x);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		x;
	int		w;

	if (size <= 0)
		return ((char *)malloc(sizeof(char)));
	x = sizetotal(0, size, strs, sep);
	dest = (char *)malloc(x * sizeof(char) + 1);
	if (!(dest))
		return (0);
	dest[0] = '\0';
	w = 0;
	while (size > w)
	{
		ft_strcat(dest, strs[w]);
		if (w + 1 != size)
			ft_strcat(dest, sep);
		w++;
	}
	return (dest);
}


#include <stdio.h>
#include <stdlib.h>

int main() {
    char *test1[] = {"Hello", "world", "!", NULL};
    char *sep1 = ", ";
    char *result1 = ft_strjoin(3, test1, sep1);
    printf("Test 1: %s\n", result1);
    free(result1);

    char *test2[] = {"42", "is", "the", "answer", NULL};
    char *sep2 = "-";
    char *result2 = ft_strjoin(4, test2, sep2);
    printf("Test 2: %s\n", result2);
    free(result2);

    char *test3[] = {"Single", "string", NULL};
    char *sep3 = "_";
    char *result3 = ft_strjoin(2, test3, sep3);
    printf("Test 3: %s\n", result3);
    free(result3);

    char *test4[] = {"Concatenate", "empty", "strings", NULL};
    char *sep4 = "";
    char *result4 = ft_strjoin(3, test4, sep4);
    printf("Test 4: %s\n", result4);
    free(result4);

    char *test5[] = {"Test", NULL};
    char *sep5 = "Separator";
    char *result5 = ft_strjoin(1, test5, sep5);
    printf("Test 5: %s\n", result5);
    free(result5);

    char *test6[] = {NULL};
    char *sep6 = "-";
    char *result6 = ft_strjoin(0, test6, sep6);
    printf("Test 6: %s\n", result6);
    free(result6);

    char *test7[] = {"A", "B", "C", "D", "E", NULL};
    char *sep7 = "";
    char *result7 = ft_strjoin(5, test7, sep7);
    printf("Test 7: %s\n", result7);
    free(result7);

    char *test8[] = {"This", "is", "a", "long", "test", NULL};
    char *sep8 = " ";
    char *result8 = ft_strjoin(5, test8, sep8);
    printf("Test 8: %s\n", result8);
    free(result8);

    char *test9[] = {"One", "Two", "Three", "Four", "Five", NULL};
    char *sep9 = "\n";
    char *result9 = ft_strjoin(5, test9, sep9);
    printf("Test 9: %s\n", result9);
    free(result9);

    char *test10[] = {"Empty", NULL};
    char *sep10 = "Separator";
    char *result10 = ft_strjoin(1, test10, sep10);
    printf("Test 10: %s\n", result10);
    free(result10);

    return 0;
}
