#include <unistd.h>
/*
int	check_r2(char *str, char *str2, int c)
{


}
*/
int	check_r(char *str, int c)
{
	int	i;

	i = 0;
	while (i < c)
	{
		if (str[i] == str[c])
			return (0);
		i++;
	}
	return (1);
}

void	funion(char *str, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str2[j])
		{
			if (str[i] == str[j] && check_r(str, j) == 1)
				write(1, &str[i], 1);
			j++;
		}
		i++;
		j = 0;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		funion(av[1], av[2]);	
	}
	write(1, "\n", 1);
	return (0);
}
