int ft_atoi(const char *str)
{
	int i;
	int n;
	int s;

	if(!str)
		return (0);
	i = 0;
	n = 0;
	s = 1;
	while(str[i] != '\0' && (str[i] == 32 || (str[i] > 0 && str[i] <14)))
		i++;
	if(str[i] == '+' || str[i] == '-')
	{	
		if(str[i] == '-')
			s = -s;
		i++;
	}
	while(str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		n = (n*10) + (str[i] - 48);
		i++;
	}
	n = n*s;
	return (n);

}
