#include<stdio.h>
#include<stdlib.h>

typedef struct data D;
struct data
{
	double a;
	double b;
	double c;
};

D dt[1009];
int comp(const void *a, const void *b);
int main()
{
	int n, demand, i;
	double max;

	scanf("%d%d", &n, &demand);
	for (i = 1; i <= n; i++)
		scanf("%lf", &dt[i].a);
	for (i = 1; i <= n; i++)
	{
		scanf("%lf", &dt[i].b);
		dt[i].c = dt[i].b / (1.0*dt[i].a);
	}

	qsort(dt + 1, n, sizeof(dt[1]), comp);

	i = 1;
	max = 0.0;
	for (i = 1; i <= n; i++)
	{
		if (demand - dt[i].a > 0)
		{
			max = max + 1.0*dt[i].b;
			demand = demand - dt[i].a;
		}
		else
		{
			max = max + 1.0*demand *dt[i].c;
			break;
		}
	}
	printf("%.2lf\n", max);
	return 0;
}
int comp(const void *a, const void *b)
{
	return (*(D*)b).c > (*(D*)a).c ? 1 : -1;
}
