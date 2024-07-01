#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int	i;
		int	j;
		int	k;
		char	c;

		k = 0;
		if (argv[1][0] >= 'a' && argv[1][0] <= 'z')
			k = 1;
		i = 0;
		j = 0;
		while(argv[1][i] != '\0' && k == 1)
		{
			if((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
				j++;
			i++;
		}
		if(i == j)
		{
			i = 0;
			while(argv[1][i] != '\0')
			{
				if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				{
					write(1, "_",1);
					c = argv[1][i] + 32;
				}
				else
					c = argv[1][i];
				write(1, &c, 1);
				i++;
			}
		}
	}
	write(1,"\n", 1);
	return (0);
}
