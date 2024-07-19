#include <unistd.h>
#include <stdio.h>

int cw(char *str)
{
	int i;
	int k;

	i = 1;
	k = 0;
	
	while(str[i] != '\0')
	{
		if((str[i] == 32 || (str[i] > 0 && str[i] < 14)) && (str[i - 1] != 32 && !(str[i - 1] > 0 && str[i - 1] < 14)))
			k++;
		i++;
	}
	k++;
	return (k);
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int w;
		int i;
		int z;
		int k;

		w = cw(argv[1]);
		i = 0;
		while(argv[1][z] != '\0')
			z++;
		z--;
		while(i < w)
		{

			while(z >= 0 && argv[1][z] != 32 && !(argv[1][z] > 0 && argv[1][z] < 14))
				z--;
			k = z + 1;
			while(argv[1][k] != '\0'&& argv[1][k] != 32 && !(argv[1][k] > 0 && argv[1][k] < 14))
			{
				write(1, &argv[1][k], 1);
				k++;
			}
			if(z > 0 && argv[1][z] == 32 || (argv[1][z] > 0 && argv[1][z] < 14))
			{
				write(1, &argv[1][z], 1);
				z--;
			}
			i++;
		}
	}
	write(1,"\n",1);
	return(0);
}
