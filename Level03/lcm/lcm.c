unsigned int	lcm(unsigned int a, unsigned int b)
{
	if( a == 0 || b == 0)
		return (0);
	int i;
	int j;
	int r;
	int hcf;

	hcf = 1;
	i = 1;
	if(a <= b)
		j = a;
	else
		j = b;
	while(i <= j)
	{
		if(a % i == 0 && b % i == 0)
			hcf = i;
		i++;
	}
	r = (a * b)/hcf;
	return(r);
}
