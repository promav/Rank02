#include <stdio.h>
#include <string.h>


int ft_strcmp(char *s1, char *s2);

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int a;
		int b;

		a = ft_strcmp(argv[1], argv[2]);
		b = strcmp(argv[1], argv[2]);
		printf("original= %i\nmio= %i",b,a);
	}
	printf("\n");
	return(0);
}
