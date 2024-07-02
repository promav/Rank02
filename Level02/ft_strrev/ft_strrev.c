#include <stdio.h>

char *ft_strrev(char *str)
{
	int	i;
	int	j;
	char	a;

	i = 0;
	while(str[i] != '\0')
		i++;
	i--;
	j = 0;
	while(j <= (i / 2))
	{
		a = str[i - j];
		str[i - j] = str[j];
		str[j] = a;
		j++;
	}
	return (str);
}
