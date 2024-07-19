#include <stdlib.h>
#include <stdio.h>

int cw(char *str)
{
	if(!str)
		return (0);
	int i;
	int k;

	i = 0;
	k = 0;
	if(str[i] == 32 || (str[i] > 0 && str[i] < 14))
		i++;
	while(str[i] != '\0')
	{
		if((str[i] == 32 || (str[i] > 0 && str[i] < 14)) && (str[i - 1] != 32 && !(str[i -1] > 0 && str[i -1] < 14)))
			k++;
		i++;
	}
	if(str[i] == '\0' && (str[i-1] != 32 && !(str[i - 1] > 0 && str[i - 1] < 14)))
		k++;
	return (k);
}
int cl(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0' && str[i] != 32 && !(str[i] > 0 && str[i] < 14))
		i++;
	return i;
}

char **ft_split(char *str)
{
	char **r;
	int w;
	int i;
	int j;
	int l;
	int k;

	w = cw(str);
	i = 0;
	j = 0;
	r = (char **)malloc((w+1) * sizeof(char *));
	if(!r)
		return NULL;
	while(i < w && str[j] != '\0')
	{
		if(str[j] == 32 || (str[j] > 0 && str[j] < 14))
			j++;
		else
		{
			l = cl(&str[j]);
			r[i] = (char *)malloc((l+1) * sizeof(char)); 
			if(!r[i])
				return NULL;
			k = 0;
			while(k < l)
			{
				r[i][k] = str[j];
				k++;
				j++;
			}
			r[i][l] = '\0';
			i++;
		}
	}
	r[i] = NULL;
	return (r);
}

int main()
{
	int p;
	int i;
	char **ps;
	char f[] = "Hola soy Pablo     ";
	

	p = cw(f);
	printf("Numero de Palabras: %i\n\n", p);
	//ft_split(f);
	ps = ft_split(f);
	i = 0;
	while(i < p)
	{
		printf("%s\n", ps[i]);
		free(ps[i]);
		ps[i] = NULL;
		i++;
	}
	free(ps);
	ps = NULL;
	return 0;
}
