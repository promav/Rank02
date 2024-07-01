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
			if((argv[1][i] >= 'a' && argv[1][i] <= 'y') ||(argv[1][i] >= 'A' && argv[1][i] <= 'Y'))
				a = argv[1][i] + 1;
			else if(argv[1][i] == 'z' || argv[1][i] == 'Z')
				a = argv[1][i] - 25;
			else
				a = argv[1][i];
			write(1, &a, 1);
			i++;
		}
	}
	write(1, "\n",1);
	return 0;
}
