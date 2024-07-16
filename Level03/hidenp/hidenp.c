#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int i;
		int j;
		int k;

		i = 0;
		k = 0;
		j = 0;
		while(argv[1][i] != '\0')
		{
			while(argv[2][j] != '\0')
			{
				if(argv[1][i] == argv[2][j])
				{
					k++;
					j++;
					break ;
				}
				j++;
			}
			i++;
		}
		if(k == i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
