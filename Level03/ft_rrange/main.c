#include <stdio.h>

int	*ft_rrange(int start, int end);

int main()
{
	int a = -10;
	int b = 12;
	int i = 0;
	int j = b - a + 1;
	int *r = ft_rrange(a, b);

	while(i < j)
	{
		printf("%i\n", r[i]);
		i++;
	}
	return (0);
}
