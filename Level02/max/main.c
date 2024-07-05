#include <stdio.h>

int max(int *tab, unsigned int len);

int main()
{
	int arr[10] = {1, 4, 7, 58, 34, 27, 69, 25, 34, 32};
	int mx;

	mx = max(arr, 10);
	printf("Max: %i\n", mx);
	return 0;
}
