#include <unistd.h>

void print_hex(int a)
{
	int i;
	char b[] = "0123456789abcdef";

	if(a < 16)
		write(1, &b[a], 1);
	else
	{
		print_hex(a / 16);
		print_hex(a % 16);
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i;
		int num;
		
		num = 0;
		i = 0;
		while(argv[1][i] != '\0')
		{
			num = (num * 10) + (argv[1][i] - 48);
			i++;
		}
		print_hex(num);
	}
	write(1, "\n", 1);
	return (0);
}
