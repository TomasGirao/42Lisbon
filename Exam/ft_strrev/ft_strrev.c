#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	c;
	int	size;

	size = 0;
	i = 0;
	j = 0;
	while (str[j])
		j++;
	//j--;
	j -= 1;
	while (i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		j--;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "hello";

	printf("%s", ft_strrev(str));
	return (0);
}
