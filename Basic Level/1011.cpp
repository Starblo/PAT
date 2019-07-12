#include<stdio.h>

int main()
{
	long long a, b, c;
	int x, i;

	scanf("%d", &x);	
	for (i = 1; i <= x; i++)
	{
		scanf("%lld%lld%lld", &a, &b, &c);
		if (a + b > c)
			printf("Case #%d: true\n", i);
		else
			printf("Case #%d: false\n", i);
	}
	return 0;
}
