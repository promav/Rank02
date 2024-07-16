#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc > 1)
	{
		int i;
		int j;

		j = 0;
		while(j < argc)
		{
			if(argv[j][0] >= 'a' && argv[j][0] <= 'z')
				argv[j][0] -= 32;
			write(1, &argv[j][0], 1);
			i = 1;
			while(argv[j][i] != '\0')
			{
				if((argv[j][i] >= 'a' && argv[j][i] <= 'z') && (argv[j][i-1] == 32 || (argv[j][i-1] > 0 && argv[j][i-1] < 14)))
					argv[j][i] -= 32;
				if((argv[j][i] >= 'A' && argv[j][i] <= 'Z') && (argv[j][i-1] != 32 && !(argv[j][i-1] > 0 && argv[j][i-1] < 14)))
					argv[j][i] += 32;
				write(1, &argv[j][i], 1);
				i++;
			}
			if(j < (argc -1))
				write(1, "\n", 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
