#include<stdio.h>

int main()
{
	int a[200];
	int i, m, n;

	scanf("%d%d", &n, &m);
	for (i = n; i >= 1; i--)
		scanf("%d", &a[i]);

	for (i = 1; i <= m; i++)
		a[n + i] = a[i];
	for (i = 1; i <= n; i++)
		a[i] = a[i + m];
	for (i = n; i > 1; i--)
		printf("%d ", a[i]);
	printf("%d", a[1]);

	return 0;
}
