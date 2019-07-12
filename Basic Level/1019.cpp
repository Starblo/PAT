#include<stdio.h>
#include<stdlib.h>
int comp(const void *a, const void *b);
int main()
{
	int a, inc, dec;
	int b[4], i = -1;

	b[0] = b[1] = b[2] = b[3] = 0;
	scanf("%d", &a);
	while (a != 0)
	{
		b[++i] = a % 10;
		a = a / 10;
	}
	if (b[0] == b[1] && b[1] == b[2] && b[2] == b[3])
		printf("%d%d%d%d - %d%d%d%d = 0000", b[0], b[1], b[2], b[3], b[0], b[1], b[2], b[3]);
	else
		while (dec - inc != 6174)
		{
			qsort(b, 4, sizeof(b[0]), comp);
			dec = b[3] * 1000 + b[2] * 100 + b[1] * 10 + b[0];
			inc = b[0] * 1000 + b[1] * 100 + b[2] * 10 + b[3];
			a = dec - inc;
			printf("%.4d - %.4d = %.4d\n", dec, inc, a);
			i = -1;
			b[0] = b[1] = b[2] = b[3] = 0;
			while (a != 0)
			{
				b[++i] = a % 10;
				a = a / 10;
			}
		}
	return 0;
}
int comp(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}
