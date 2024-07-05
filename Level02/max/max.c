int	max(int *tab, unsigned int len)
{
	int i;
	int temp;
	
	if(!tab)
		return 0;
	temp = 0;
	i = 0;
	while(i < len)
	{
		if(tab[i] > temp)
			temp = tab[i];
		i++;
	}
	return(temp);
}
