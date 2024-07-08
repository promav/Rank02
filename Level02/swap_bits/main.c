#include <stdio.h>

unsigned char	swap_bits(unsigned char octet);

int main()
{
	unsigned char a = 0b00010100;
	unsigned char b = swap_bits(a);

	printf("a: %d\nb: %d\n", a, b);
	return 0;
}
