#include <stdio.h>

int ft_strlen(char *str);
int main(void)
{
	char *a = "Hola soy Pablo";
	char *b = "파";

	printf("%i\n%i\n", ft_strlen(a), ft_strlen(b));
	return 0;
}
