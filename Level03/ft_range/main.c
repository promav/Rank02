#include <stdio.h>

int	*ft_range(int start, int end);

int main()
{
	int a = -10;
	int b = 12;
	int i = 0;
	int j = b - a + 1;
	int *r = ft_range(a, b);

	while(i < j)
	{
		printf("%i\n", r[i]);
		i++;
	}
	return (0);
}
