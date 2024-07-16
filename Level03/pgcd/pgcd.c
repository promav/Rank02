#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int a;
		int b;
		int i;
		int j;
		int r;

		i = 1;
		r = 1;
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		if (a <= b)
			j = a;
		else
			j = b;
		while(i <= j)
		{
			if(a % i == 0 && b % i == 0)
				r = i;
			i++;
		}
		printf("%i", r);
	}
	printf("\n");
	return (0);
}
