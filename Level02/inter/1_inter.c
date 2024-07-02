#include <unistd.h>
#include <stdio.h>

int has_char(char *s1, char c)
{
	int i;

	i = 0;
	while(s1[i] != '\0')
	{
		if(s1[i] == c)
			return (1);
		i++;
	}
	return 0;
}

void inter(char *s1, char *s2)
{
	char temp[10000] = {0};
	int i;
	int j;

	i = 0;
	j = 0;
	while(s1[i] != '\0')
	{
		if(has_char(s2, s1[i]) && !(has_char(temp, s1[i])))
		{
			write(1, &s1[i], 1);
			temp[j] = s1[i];
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
