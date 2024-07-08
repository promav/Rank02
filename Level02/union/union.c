#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int i;
		int j;
		int k;
		int l;
		char a[10000] = "";

		i = 0;
		k = 0;
		while(argv[1][i] != '\0')
		{	
			j = 0;
			while(a[j] != '\0')
				j++;
			l = 0;
			while(a[l] != '\0' && a[l] != argv[1][i])
				l++;
			if (l == j)
			{
				a[k] = argv[1][i];
				write(1, &a[k], 1);
				k++;
				a[k] = '\0';
			}
			i++;
		}
		i = 0;
		while(argv[2][i] != '\0')
		{	
			j = 0;
			while(a[j] != '\0')
				j++;
			l = 0;
			while(a[l] != '\0' && a[l] != argv[2][i])
				l++;
			if (l == j)
			{
				a[k] = argv[2][i];
				write(1, &a[k], 1);
				k++;
				a[k] = '\0';
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
