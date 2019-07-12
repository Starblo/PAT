#include <stdio.h>

int main()
{
	int n;
	int i = 6, imax;
	char c;
	scanf("%d", &n);
	getchar();
	scanf("%c", &c);

	if (n < 7)
		printf("%c\n%d", c, n - 1);
	else
	{
		n = n - 1;
		while (n >= i)
		{
			n = n - i;
			i = i + 4;
		}
		i = i - 4;
		imax = i;
		while (i > 5)
		{
			for (int j = 0; j < (imax - i) / 4; j++)
				printf(" ");
			for (int j = 0; j < i / 2; j++)
				printf("%c", c);\
			printf("\n");
			i = i - 4;
		}
		for (int j = 0; j < (imax - 1) / 4; j++)
			printf(" ");
		printf("%c\n", c);
		i = 6;
		while (i <= imax)
		{
			for (int j = 0; j < (imax - i) / 4; j++)
				printf(" ");
			for (int j = 0; j < i / 2; j++)
				printf("%c", c);
			printf("\n");
			i = i + 4;
		}
		printf("%d\n", n);
	}

	return 0;
}
