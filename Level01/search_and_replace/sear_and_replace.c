#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		int i;
		int k;

		i = 0;
		k = 0;
		while(argv[2][i] != '\0')
			i++;
		while(argv[3][k] != '\0')
			k++;
		if((i + k) == 2)
		{
			int j;

			j = 0;
			while(argv[1][j] != '\0')
			{
				if(argv[1][j] == argv[2][0])
					write(1, &argv[3][0], 1);
				else
					write(1, &argv[1][j], 1);
				j++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
