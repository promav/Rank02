#include <stdio.h>

int ft_atoi(const char *str);

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int a;

		a = ft_atoi(argv[1]);
		printf("%i", a);
	}
	printf("\n");
	return (0);
}
