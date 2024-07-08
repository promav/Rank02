#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet);

int main()
{
	unsigned char a;
	unsigned char b;

	a = 65;
	b = reverse_bits(a);
	printf("original: %d\nreverso: %d\n", a, b);
	return 0;
}
