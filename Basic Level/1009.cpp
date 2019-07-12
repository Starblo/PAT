#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char a[85];
	char b[85][85];
	int i, j, k;

	i = j = k = 0;
	gets(a);
	while (a[k] != '\0')
	{
		if (a[k] != ' ')
			b[i][j++] = a[k];
		else
		{
			b[i][j] = '\0';
			j = 0;
			i++;
		}
		k++;
	}

	b[i][j] = '\0';
	j = 0;
	for (k = i; k >= 0; k--)
	{
		while (b[k][j] != '\0')
			printf("%c", b[k][j++]);
		j = 0;
		if (k != 0)
			printf(" ");
	}
	return 0;
}
