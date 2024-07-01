#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		int n1;
		int n2;
		int r;

		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		if(argv[2][0] == '+' )
			r = n1 + n2;
		if(argv[2][0] == '-')
			r = n1 - n2;
		if(argv[2][0] == '*')
			r = n1 * n2;
		if(argv[2][0] == '/')
			r = n1 / n2;
		if(argv[2][0] == '%')
			r = n1 % n2;
		printf("%i", r);
	}
	printf("\n");
	return(0);
}
