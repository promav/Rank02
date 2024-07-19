#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
	if(n <= 1)
		return (0);
	int i;
	
	i = 1;
	while(i <= n)
	{
		if((i != 1 && i != n) && (n % i == 0))
			return (0);
		i++;
	}
	return (1);
}

int main (int argc, char **argv)
{
	if(argc == 2)
	{
		int i;
		int k;
		int n;
		
		n = atoi(argv[1]);
		k = 0;
		i = 2;
		if(n == 1)
		{
			printf("1\n");
			return (0);
		}
		while(n != 1)
		{	
			if(is_prime(n))
			{	
				if(k != 0)
					printf("*");
				printf("%i", n);
				break ;
			}
			else if(is_prime(i))
			{	
				if(n % i == 0)
				{
					if(k != 0)
						printf("*");
					printf("%i", i);
					k++;
					n = n / i;
					i = 2;
				}
			}
			i++;
			
		}
		
	}
	printf("\n");
	return 0;
}
