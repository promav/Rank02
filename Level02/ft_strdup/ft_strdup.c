#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i;
	char *dup;

	if(!src)
		return NULL;
	i = 0;
	while(src[i] != '\0')
		i++;
	dup = (char *)malloc(i * sizeof(char));
	if(!dup)
		return NULL;
	i = 0;
	while(src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
