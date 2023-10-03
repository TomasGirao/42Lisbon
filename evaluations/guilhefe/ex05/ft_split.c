/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:45:04 by guilhefe          #+#    #+#             */
/*   Updated: 2023/08/12 23:45:06 by guilhefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	test1(char *str, int i, char *charset)
{
	int	x;

	x = 0;
	while (charset[x] != '\0')
	{
		if (str[i] == charset[x])
			return (0);
		x++;
	}
	return (1);
}

char	**ini_arr_arr(char *str, int i, int w, char *charset)
{
	char	**dest;

	while (str[i] != '\0')
	{
		while (test1(str, i, charset) == 0)
			i++;
		if (str[i] == '\0')
			break ;
		while (str[i] != '\0' && test1(str, i, charset))
			i++;
		w++;
	}
	dest = (char **)malloc(sizeof(char *) * (w + 1));
	return (dest);
}

int	ini_arrs(char *str, int i, char **dest, char *charset)
{
	int	w;
	int	x;

	w = 0;
	x = 0;
	while (str[i] != '\0')
	{
		while (test1(str, i, charset) == 0)
			i++;
		while (str[i] != '\0' && test1(str, i, charset))
		{
			i++;
			x++;
		}
		dest[w] = (char *)malloc(sizeof(char) * x + 1);
		if (!(dest[w]))
			return (-1);
		x = 0;
		w++;
	}
	if (test1(str, i - 1, charset) == 0)
		w--;
	return (w);
}

void	limit(char *str, char **dest, char *charset, int q)
{
	int	x;
	int	w;
	int	i;

	w = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (test1(str, i, charset) == 0)
			i++;
		x = 0;
		while (str[i] != '\0' && test1(str, i, charset))
		{
			dest[w][x] = str[i];
			i++;
			x++;
		}
		if (w < q)
			dest[w][x] = '\0';
		w++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		x;

	if (ini_arr_arr(str, 0, 0, charset) != 0)
		dest = ini_arr_arr(str, 0, 0, charset);
	else
		return (0);
	if (ini_arrs(str, 0, dest, charset) == -1)
		return (0);
	x = ini_arrs(str, 0, dest, charset);
	if (x == 0)
	{
		dest[x] = 0;
		return (dest);
	}
	limit(str, dest, charset, x);
	dest[x] = 0;
	return (dest);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Paste the ft_split function you want to test here

void print_strings(char **strings) {
    for (int i = 0; strings[i] != NULL; i++) {
        printf("[%d]: %s\n", i, strings[i]);
    }
    printf("\n");
}

int main() {
    char *input1 = "Hello,world,this,is,a,test";
    char *charset1 = ",";
    
    char *input2 = "   Spacing    \t\t Between   \n   Words   ";
    char *charset2 = " \t\n";
    
    char *input3 = "No separators here!";
    char *charset3 = " ,";

    char *input4 = "";
    char *charset4 = " ";

    char *input5 = "111222333444555666777888";
    char *charset5 = "123";

    char *input6 = "OneBigWord";
    char *charset6 = " ";

    char *input7 = "SingleWord";
    char *charset7 = " ";

    char *input8 = "a:b:c:d:e:f";
    char *charset8 = ":";

    char *input9 = "Separated\nBy\nNewlines";
    char *charset9 = "\n";

    char *input10 = "1,2,3,4,5,6,7,8,9,0";
    char *charset10 = ",";

    char *input11 = "Word1;Word2,Word3|Word4";
    char *charset11 = ";,|";

    char *input12 = "OnlyOneWord";
    char *charset12 = " ";

    // Add more test cases as needed
    
    char *test_cases[] = {input1, input2, input3, input4, input5,
                          input6, input7, input8, input9, input10,
                          input11, input12};
    
    char *charsets[] = {charset1, charset2, charset3, charset4, charset5,
                        charset6, charset7, charset8, charset9, charset10,
                        charset11, charset12};

    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        printf("Test Case %d:\n", i + 1);
        printf("Input: %s\n", test_cases[i]);
        printf("Charset: %s\n", charsets[i]);
        
        char **strings = ft_split(test_cases[i], charsets[i]);
        printf("Result:\n");
        print_strings(strings);
        
        // Free allocated memory
        for (int j = 0; strings[j] != NULL; j++) {
            free(strings[j]);
        }
        free(strings);
        
        printf("----------------------------\n");
    }

    return 0;
}*/
