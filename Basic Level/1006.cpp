#include<stdio.h>

int main()
{
	int xx,x, i, j, k, b, s, g;

	b = s = g = 0;
	scanf("%d", &x);
	xx = x;
	g = x % 10;
	x = x / 10;
	if (x != 0)
	{
		s = x % 10;
		x = x / 10;
		if (x != 0)
			b = x % 10;
	}

	for (i = 1; i <= b; i++)
		printf("B");
	for (j = 1; j <= s; j++)
		printf("S");
	for (k = 1; k <= g; k++)
		printf("%d", k);
	return 0;
}
