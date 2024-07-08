#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int i;
		int j;
		int k;
		int l;
		char a[1000] = "";

		i = 0;
		k = 0;
		l = 0;
		while(argv[1][i] != '\0')
		{
			j = k;
			while(argv[2][j] != '\0')
			{
				if(argv[1][i] == argv[2][j])
				{
					a[l] = argv[1][i];
					l++;
					a[l] = '\0';
					k = j + 1;
					break ;
				}
				j++;
			}
			i++;
		}
		j = 0;
		if(i == l)
		{
			while(a[j] != 0)
			{
				write(1, &a[j], 1);
				j++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
