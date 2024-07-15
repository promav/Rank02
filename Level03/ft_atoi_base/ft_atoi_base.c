int ft_atoi_base(const char *str, int str_base)
{
	char b1[] = "0123456789abcdef";
	char b2[] = "0123456789ABCDEF";
	int i;
	int num;
	int s;
	int j;

	i = 0;
	num = 0;
	s = 1;
	while(str[i] != '\0' && (str[i] == 32 || (str[i] > 0 && str[i] < 14)))
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			s = -s;
		i++;
	}
	while((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F'))
	{
		j = 0;
		if(str[i] >= 'A' && str[i] <= 'F')
		{
			while((j < str_base || str[j] != '\0') && str[i] != b2[j])
				j++;
		}
		else
		{
			while((j < str_base || str[j] != '\0') && str[i] != b1[j])
				j++;
		}
		num = (num * str_base) + j;
		i++;

	}
	num = num * s;
	return (num);
}
