#include <unistd.h>

void print_nb(int a)
{
	char b;
	if(a < 10)
	{
		b = a + 48;
		write(1, &b, 1);
	}
	else
	{
		print_nb(a / 10);
		print_nb(a % 10);
	}
}

int ft_atoi(char *str)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while(str[i] != '\0')
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return num;
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i;
		int n;

		i = 1;
		n = ft_atoi(argv[1]);
		while(i <= 9)
		{
			print_nb(i);
			write(1, " x ", 3);
			print_nb(n);
			write(1," = ", 3);
			print_nb(i * n);
			if( i < 9)
				write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
