#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i;
		int k;
		
		i = 0;
		k = 0;
		while(argv[1][i] != '\0' && argv[1][i+1] != '\0')
		{
			if((argv[1][i] == 32 || (argv[1][i] > 0 && argv[1][i] <14)) &&(argv[1][i + 1] != 32 && !(argv[1][i + 1] > 0 && argv[1][i + 1] < 14))) 
				k = i;
			i++;
		}
		k++;
		while(argv[1][k] != '\0' && (argv[1][k] != 32 && !(argv[1][k] > 0 && argv[1][k] < 14)))
		{
			write(1, &argv[1][k], 1);
			k++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
