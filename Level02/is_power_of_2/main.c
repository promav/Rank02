#include <stdio.h>

int pw_2(unsigned int n)
{
	unsigned int t;
	
	t = n;
	if(n == 0 || n == 1)
		return (0);
	while(t > 0)
	{
		if(t % 2 != 0)
			return (0);
		if(t / 2 == 1 && t % 2 == 0)
			return (1);
		t = t / 2;
	}
}

int main()
{
	printf("0: %i\n1: %i\n16: %i\n96: %i\n512: %i\n1536: %i\n", pw_2(0), pw_2(1), pw_2(16), pw_2(96), pw_2(512),pw_2(1536));
	return (0);
}

