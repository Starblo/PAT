#include <stdio.h>

int main()
{
	int c1, c2, c;

	scanf("%d%d", &c1, &c2);

	c = (c2 - c1 + 50) / 100;

	printf("%.2d:%.2d:%.2d\n", c / 3600, c / 60 - c / 3600 * 60, c % 60);

	return 0;
}
