#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*r;
	int	i;
	int	j;

	i = 0;
	j = end - start + 1;
	r = (int *)malloc(j * sizeof(int));
	if(!r)
		return (NULL);
	while(i < j)
	{
		r[i] = end - i;
		i++;
	}
	return (r);
}
