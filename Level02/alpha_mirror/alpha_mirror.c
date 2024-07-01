#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i;
		char a;

		i = 0;
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				a = 155 - argv[1][i];
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				a = 219 - argv[1][i];
			else
				a = argv[1][i];
			write(1, &a, 1);
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
