#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i;
		int j;
		int k;
		int l;

		i = 0;
		l = 0;
		while(argv[1][i] != '\0' && (argv[1][i] == 32 || (argv[1][i] > 0 && argv[1][i] < 14)))
			i++;
		while(argv[1][i] != '\0')
		{
			j = i;
			k = 0;
			if(argv[1][i] == 32 || (argv[1][i] > 0 && argv[1][i] < 14))
			{
				while(argv[1][j] != '\0')
				{
					if(argv[1][j] != 32 && !(argv[1][j] > 0 && argv[1][j] < 14))
						k++;
					j++;
				}
				if( k != 0 && (argv[1][i - 1] != 32 && !(argv[1][i - 1] > 0 && argv[1][i - 1] < 14)))
					write(1, &argv[1][i], 1);
			}
			else
			{
				if(l == 0)
				{	
					l = 1;
					write(1, &argv[1][i], 1);
				}
				else
				{
					if(argv[1][i -1] == 32 || (argv[1][i - 1] > 0 && argv[1][i - 1] < 14))
						write(1, "  ", 2);
					write(1, &argv[1][i], 1);
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
