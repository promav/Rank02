#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b);

int main()
{
	unsigned int x;
	unsigned int y;
	unsigned int res;

	x = 3;
	y = 4;

	res = lcm(y, x);
	printf("%u\n", res);
	return (0);
}
