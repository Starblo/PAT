#include<stdio.h>

int main()
{
	char a[1010];
	int b, i, temp;

	scanf("%s %d", a, &b);
	i = 2;
	if (a[1] != '\0')
	{
		temp = (a[0] - '0') * 10 + a[1] - '0';
		while (a[i] != '\0')
		{
			printf("%d", temp / b);
			temp = (temp%b) * 10 + a[i] - '0';
			i++;
		}
		printf("%d %d", temp / b, temp%b);
	}
	else
		printf("%d %d", (a[0] - '0') / b, (a[0] - '0') % b);
	return 0;
}
