#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *num)
{
	long n;
	int s;
	int i;
	int temp;

	n = 0;
	s = 1;
	i = 0;
	while(num[i] != '\0' && (num[i] == 32 || (num[i] > 0 && num[i] <14)))
		i++;
	if(num[i] == '+' || num[i] == '-')
	{
		if(num[i] == '-')
			s = -s;
		i++;
	}
	while(num[i] != '\0' && (num[i] >= '0' && num[i] <='9'))
	{
		temp = num[i] - 48;
		n = (n*10) + temp;
		i++;
	}
	n = n * s;
	return (n);

}

int is_prime(int a)
{
	int i;
	int f;
	
	if(a == 0 || a == 1)
		return 0;
	i = 1;
	f = 1;
	while(i <= a)
	{
		if(a % i == 0 && i != 1 && i != a)
			f = 0;
		i++;
	}
	return (f);
}

int main(int argc, char **argv)
{
	int n;
	int i;
	int r;

	n = ft_atoi(argv[1]);
	if(argc == 2 && n >= 0)
	{	
		r = 0;	
		i = 1;
		while(i <= n)
		{
			if(is_prime(i) == 1)
				r = r + i;
			printf("i: %i\nr: %i\n",i, r);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
