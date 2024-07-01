#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *s1, char *s2);

int main(void)
{
	char	dest[100];
	printf("%s\n", dest);
	strcpy(dest, "Prueba con el original");
	printf("%s\n", dest);
	ft_strcpy(dest, "prueba con el mio");
	printf("%s\n", dest);
	return 0;
}
