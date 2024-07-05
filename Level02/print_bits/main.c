#include <unistd.h>

void print_bits(unsigned char octet);

int main(void)
{
	print_bits(254);
	write(1, "\n", 1);
	return 0;
}
