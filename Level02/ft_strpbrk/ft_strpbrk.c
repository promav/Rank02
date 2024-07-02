#include <stddef.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j;
	int r;
	int l;
	
	r = 0;
	while(s1[r] != '\0')
		r++;
	l = r;
	i = 0;
	while(s2[i] != '\0')
	{
		j = 0;
		while(s1[j] != s2[i] && s1[j] != '\0')
			j++;
		if(j < r)
			r = j;
		i++;
	}
	if(r == l)
		return NULL;
	return ((char *)&s1[r]);

}
