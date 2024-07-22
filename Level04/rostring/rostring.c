#include <unistd.h>
#include <stdlib.h>

int cw(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while(str[i] != '\0' && (str[i] == 32 || (str[i] > 0 && str[i] < 14)))
		i++;
	while(str[i] != '\0')
	{	
		if((str[i] == 32 || (str[i] > 0 && str[i] < 14)) && (str[i - 1] != 32 && !(str[i - 1] > 0 && str[i - 1] < 14)))
			k++;
		i++;
	}
	if(str[i] == '\0' && (str[i - 1] != 32 && !(str[i - 1] > 0 && str[i - 1] < 14)))
		k++;
	return k;
}
int cs(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while(str[i] != '\0')
	{
		if(str[i] == 32 || (str[i] > 0 && str[i] < 14))
			k++;
		i++;
	}
	return k;
}
void *nd_spaces(char *str, int w, int s)
{
	int i;
	int k;
	char *temp;

	i = 0;
	while(str[i] != '\0')
		i++;
	temp = (char *)malloc((i - s + w) * sizeof(char));
	if(!temp)
		return NULL;
	i = 0;
	while(str[i] != '\0' && (str[i] == 32 || (str[i] > 0 && str[i] < 14)))
		i++;
	k = 0;
	while(str[i] != '\0')
	{
		if((str[i] == 32 || (str[i] > 0 && str[i] < 14)) && (str[i + 1] == '\0' || (str[i - 1] == 32 || (str[i - 1] > 0 && str[i - 1] < 14))))
			i++;
		else
		{
			temp[k] = str[i];
			i++;
			k++;
		}
	}
	temp[k] = '\0';
	if(temp[k - 1] == 32 || (temp[k - 1] > 0 && temp[k - 1] < 14))
		temp[k - 1] = '\0';
	i = 0;
	while(temp[i] != '\0')
	{
		str[i] = temp[i];
		i++;
	}
	str[i] = '\0';
	free(temp);
}

void *order(char *str)
{
	int i;
	int k;
	char *temp;

	i = 0;
	while(str[i] != 32 || (str[i] > 0 && str[i] < 14))
		i++;
	temp = (char *)malloc((i+1) * sizeof(char));
	if(!temp)
		return NULL;
	i = 0;
	while(str[i] != 32 || (str[i] > 0 && str[i] < 14))
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	i++;
	k = 0;
	while(str[k + i] != '\0')
	{
		str[k] = str[k + i];
		k++;
	}
	str[k] = ' ';
	k++;
	i = 0;
	while(temp[i] != '\0')
	{
		str[k + i] = temp[i];
		i++;
	}
	free(temp);
}
int main(int argc, char **argv)
{
	if(argc >= 2)
	{
		int w;
		int s;
		int i;

		w = cw(argv[1]);
		s = cs(argv[1]);
		nd_spaces(argv[1], w, s);
		if( w > 1)
			order(argv[1]);
		i = 0;
		while(argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		
	}
	write(1,"\n", 1);
	return (0);
}
