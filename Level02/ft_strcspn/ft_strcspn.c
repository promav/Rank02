#include <stddef.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;
	size_t r;

	i = 0;
	r = 0;
	while(s[r] != '\0')
		r++;
	while (reject[i] != '\0')
	{
		j = 0;
		while(s[j] != '\0' && reject[i] != s[j])
			j++;
		if(j < r)
			r = j;
		i++;
	}
	return (r);
}
