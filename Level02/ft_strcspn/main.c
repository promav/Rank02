#include <string.h>
#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject);

int main(int argc, char **argv)
{
	size_t a;
	size_t b;

	b = ft_strcspn(argv[1], argv[2]);
	a = strcspn(argv[1], argv[2]);
	printf("original= %lu\nmio= %lu\n", a, b);
	return (0);
}
