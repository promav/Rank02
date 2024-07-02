#include <stdio.h>
#include <string.h>

size_t ft_strspn(const char *s, const char *accept);

int main(int argc, char **argv)
{
	size_t a;
	size_t b;

	a = strspn(argv[1], argv[2]);
	b = ft_strspn(argv[1], argv[2]);
	printf("original: %lu\nmio: %lu\n", a,b);
	return 0;
}
