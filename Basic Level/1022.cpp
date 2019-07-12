#include<stdio.h>
#include<memory.h>

int main()
{
	int a, b, d, temp;
	int k[1000], i = 0;
	scanf("%d%d%d", &a, &b, &d);
	temp = a + b;
	if (!temp)
	{
		printf("0");
		return 0;
	}
	while (temp > 0)
	{
		k[i++] = temp % d;
		temp = temp / d;
	}
	i--;
	while (i >= 0)
		printf("%d", k[i--]);

	return 0;
}
