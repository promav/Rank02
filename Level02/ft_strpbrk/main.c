#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2);

int main(int argc, char **argv)
{
	char *a;
	char *b;

	a = strpbrk(argv[1], argv[2]);
	b = ft_strpbrk(argv[1], argv[2]);
	printf("original: %s\nmio: %s\n", a, b);
	return 0;
}
