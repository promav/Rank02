int ft_strcmp(char *s1, char *s2)
{
	int i;
	int r;

	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	r = s1[i] - s2[i];
	return (r);
}
