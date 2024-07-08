#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i;
		int l;

		i = 0;
		while(argv[1][i] != '\0')
			i++;
		l = i;
		i = 0;
		while(argv[1][i] != '\0' && (argv[1][i] == '_' || (argv[1][i]>='a' && argv[1][i]<= 'z')))
		{	
			if(argv[1][i] == '_')
			{
				if (!(argv[1][i+1] >= 'a' && argv[1][i+1] <= 'z'))
					break;
			}
			i++;
		}
		if (i == l)
		{
			i = 0;
			while(argv[1][i] != '\0')
			{
				if(argv[1][i] == '_')
				{
					i++;
					argv[1][i] -= 32;
				}
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}
