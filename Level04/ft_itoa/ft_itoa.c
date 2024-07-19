#include <stdlib.h>
#include <stdio.h>

int countmalloc(int nbr)
{
	int i;
	
	i = 1;
	if(nbr < 0)
	{	
		nbr = -nbr;
		i++;
	}
	while(nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int nbr)
{
	char *n;
	int d;
	int i;
	int t;
	
	t = nbr;
	d = countmalloc(nbr);
	if(t < 0)
		t = -t;
	i = d - 1;
	n = (char *)malloc((d+1) * sizeof(char));
	if(!n)
		return NULL;
	while(i >= 0)
	{	
		n[i] = (t % 10) + 48;
		if(i == 0 && nbr < 0)
			n[0] = '-';
		t = t / 10;
		i--;	
	}
	n[d] = '\0';
	return (n);
}

int main()
{	
	char *a, *b, *c;

	a = ft_itoa(-12);
	b = ft_itoa(0);
	c = ft_itoa(1005);
	printf("-12: %s\n0: %s\n1005: %s\n", a, b, c);
	free(c);
	free(b);
	free(a);
	a = NULL;
	b = NULL;
	c = NULL;
	return 0;
}
