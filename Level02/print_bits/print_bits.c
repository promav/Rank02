#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i;
	char a[8] = "00000000";
	
	i = 7;
	while (i >= 0 && octet > 0)
	{
		a[i] = (octet % 2) + 48;
		octet = octet / 2;
		i--;
	}
	i = 0;
	while(a[i] != '\0')
	{
		write(1, &a[i], 1);
		i++;
	}
}
