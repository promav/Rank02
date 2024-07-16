#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*range;
	int	i;
	int	j;
	
	i = 0;
	j = end - start + 1;
	range = (int *)malloc(j * sizeof(int));
	if(!range)
		return (NULL);
	while(i < j)
	{
		range[i] = start + i;
		i++;
	}
	return (range);
}
