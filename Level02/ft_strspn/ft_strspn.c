#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	size_t	l;

	l = 0;
	while(accept[l] != '\0')
		l++;
	i = 0;
	while(s[i] != '\0')
	{
		j = 0;
		while(accept[j] != '\0')
		{
			if(accept[j] == s[i])
				break;
			j++;
		}
		if(j == l)
			return(i);
		i++;
	}
	return 0;
}
