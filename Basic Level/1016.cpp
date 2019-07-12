#include<stdio.h>

int main()
{
	char a[15], b[15];
	int p, q, i, m, n;

	scanf("%s %d %s %d", &a, &m, &b, &n);
	i = p = 0;
	while (a[i] != '\0')
	{
		if (a[i] - '0' == m)
			p = p * 10 + m;
		i++;
	}
	i = q = 0;
	while (b[i] != '\0')
	{
		if (b[i] - '0' == n)
			q = q * 10 + n;
		i++;
	}
	printf("%d", p + q);
	return 0;
}
