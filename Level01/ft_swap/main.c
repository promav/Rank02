#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = 13;
	d = 42;
	a = &c;
	b = &d;
	printf("c: %i, d: %i\n", c, d);
	ft_swap(a, b);
	printf("c: %i, d: %i\n", c, d);
	return 0;
}
