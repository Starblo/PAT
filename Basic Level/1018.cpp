#include<stdio.h>

int main()
{
	char a, b;
	int n, i;
	int p[3], q[3], pp[3], qq[3];

	p[0] = p[1] = p[2] = 0;
	//ping sheng fu
	q[0] = q[1] = q[2] = 0;
	pp[0] = pp[1] = pp[2] = 0;
	//b c j
	qq[0] = qq[1] = qq[2] = 0;

	scanf("%d", &n);
	getchar();
	for (i = 1; i <= n; i++)
	{		
		a = getchar();
		getchar();
		b = getchar();
		getchar();
		if (a == 'B')
		{
			if (b == 'B')
			{
				p[0]++;
				q[0]++;
			}
			else if (b == 'C')
			{
				p[1]++;
				q[2]++;
				pp[0]++;
			}
			else
			{
				p[2]++;
				q[1]++;
				qq[2]++;
			}
		}
		else if (a == 'C')
		{
			if (b == 'B')
			{
				p[2]++;
				q[1]++;
				qq[0]++;
			}
			else if (b == 'C')
			{
				p[0]++;
				q[0]++;
			}
			else
			{
				p[1]++;
				q[2]++;
				pp[1]++;
			}
		}
		else
		{
			if (b == 'B')
			{
				p[1]++;
				q[2]++;
				pp[2]++;
			}
			else if (b == 'C')
			{
				p[2]++;
				q[1]++;
				qq[1]++;
			}
			else
			{
				p[0]++;
				q[0]++;
			}
		}

	}

	printf("%d %d %d\n", p[1], p[0], p[2]);
	printf("%d %d %d\n", q[1], q[0], q[2]);

	if (pp[0] >= pp[1] && pp[0] >= pp[2])
		printf("B ");
	else if (pp[1] > pp[0] && pp[1] >= pp[2])
		printf("C ");
	else if (pp[2] > pp[0] && pp[2] > pp[1])
		printf("J ");

	if (qq[0] >= qq[1] && qq[0] >= qq[2])
		printf("B\n");
	else if (qq[1] > qq[0] && qq[1] >= qq[2])
		printf("C\n");
	else if (qq[2] > qq[0] && qq[2] > qq[1])
		printf("J\n");
	return 0;
}
