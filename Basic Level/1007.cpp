#include<stdio.h>
#include<math.h>

int su(int x);
int main()
{
	int a[10110];
	int i, x, k, count;
	
	k = 0;
	count = 0;
	scanf("%d", &x);
	for (i = 2; i <= x; i++)
		if (su(i) == 1)
			a[++k] = i;

	for (i = 1; i < k; i++)
		if (a[i + 1] - a[i] == 2)
			count++;
	printf("%d", count);
	return 0;
}
int su(int x)
{
	int i, flag;
	flag = 1;
	for (i = 2; i <= sqrt(x); i++)
		if (x%i == 0)
		{
			flag = 0;
			break;
		}
	return flag;
}
