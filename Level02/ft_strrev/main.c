#include <stdio.h>

char *ft_strrev(char *str);

int main(void)
{
	char a[] = "Hola soy Pablo";

	printf("frase original: %s\n", a);
	ft_strrev(a);
	printf("frase revertida: %s\n", a);
	return 0;
}
