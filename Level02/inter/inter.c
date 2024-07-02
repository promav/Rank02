#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int	i;
		int	k;
		int	j;
		int 	l;
		int	m;
		char 	temp[100000];
		
		temp[0] = '\0';
		i = 0;
		k = 0;
		while(argv[1][i] != '\0')
		{
			j = 0;
			l = 0;
			while(argv[2][j] != '\0')
			{
				if(argv[2][j] == argv[1][i])
				{
					m = 0;
					while(temp[m] != '\0')
					{
						if(temp[m] == argv[2][j])
						{
							l = 1;
							break;
						}
						m++;
					}
					if(l == 0)
					{
						temp[k] = argv[1][i];
						k++;
						temp[k] = '\0';
					}
				}
				if(l == 1)
					break;
				j++;
			}
			i++;
		}
		printf("String 1; %s\nString 2; %s\nResultado: %s\n", argv[1], argv[2], temp);
	}
	write(1, "\n", 1);
	return (0);
}
