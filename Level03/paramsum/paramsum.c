#include <unistd.h>

void ft_putnbr(int a)
{
	char c;
	if (a < 10)
	{	
		c = a + 48;
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
}

int main(int argc, char **argv)
{
	int arg;

	arg = argc - 1;
	ft_putnbr(arg);
	write(1, "\n", 1);
	return (0);

}
