#include <unistd.h>

int main(void)
{
	int	i;
	char	d;
	char	u;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			write(1, "fizzbuzz\n", 9);
		else if((i % 3) == 0)
			write(1, "fizz\n", 5);
		else if((i % 5) == 0)
			write(1, "buzz\n", 5);
		else
		{
			if (i > 9)
			{
				d = (i / 10) + 48;
				write (1, &d, 1);
			}
			u = (i % 10) + 48;
			write(1, &u, 1);
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}
