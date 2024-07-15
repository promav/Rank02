#include <stdio.h>

int ft_atoi_base(const char *str, int str_base);

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int a;
		a = ft_atoi_base(argv[1], 16);
		printf("%i", a);
	}
	printf("\n");
	return(0);
}
