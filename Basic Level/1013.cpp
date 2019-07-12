#include<stdio.h>
#include<math.h>

int main()
{
	int a[10020], top;
	int m, n;
	int i, j, flag;

	top = 1;
	scanf("%d%d", &m, &n);
	for (i = 2; top <= n; i++)
	{
		flag = 0;
		for (j = 2; j <= sqrt(i); j++)
			if (i%j == 0)
			{
				flag = 1;
				break;
			}
		if (!flag)
			a[top++] = i;
	}

	for (i = m; i <= n; i++)
	{
		if ((i - m + 1) % 10 == 1)
			printf("%d", a[i]);
		else
			printf(" %d", a[i]);
		if ((i - m + 1) % 10 == 0)
			printf("\n");
	}







	return 0;
}
