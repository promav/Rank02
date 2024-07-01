#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src);

int main(int argc, char **argv)
{
	char *a;
	char *b;

	a = strdup(argv[1]);
	b = ft_strdup(argv[1]);
	
	printf("frase: %s\noriginal: %s\nmio: %s\n", argv[1], a, b);
	free(a);
	free(b);
	return(0);
}
