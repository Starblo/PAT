#include<stdio.h>
#include<stdlib.h>

typedef struct info I;
struct info
{
	int num;
	int d;
	int c;
	int z;
	int o;
};

I stu[100030];
int comp(const void *a, const void *b);

int main()
{
	int i, n, l, h, k;

	scanf("%d%d%d", &n, &l, &h);
	for (i = 1; i <= n; i++)
	{
		scanf("%d%d%d", &stu[i].num, &stu[i].d, &stu[i].c);
		stu[i].z = stu[i].d + stu[i].c;
		if (stu[i].d < l||stu[i].c < l)
			stu[i].o = 5;
		else
		{
			if (stu[i].d >= h&&stu[i].c >= h)
				stu[i].o = 1;
			else if (stu[i].d >= h&&stu[i].c >= l)
				stu[i].o = 2;
			else if (stu[i].d >= l&&stu[i].d >= stu[i].c&&stu[i].c >= l)
				stu[i].o = 3;
			else
				stu[i].o = 4;
		}
	}
	
	qsort(stu + 1, n, sizeof(stu[1]), comp);
	k = 1;
	while (stu[k].o == 1 || stu[k].o == 2 || stu[k].o == 3 || stu[k].o == 4)
		k++;
	printf("%d\n", k - 1);
	for (i = 1; i < k; i++)
		printf("%d %d %d\n", stu[i].num, stu[i].d, stu[i].c);

	return 0;
}

int comp(const void * a, const void * b)
{
	if (((I*)a)->o != ((I*)b)->o)
		return ((I*)a)->o - ((I*)b)->o;
	else
	{
		if (((I*)a)->z != ((I*)b)->z)
			return ((I*)b)->z - ((I*)a)->z;
		else
		{
			if (((I*)a)->d != ((I*)b)->d)
				return ((I*)b)->d - ((I*)a)->d;
			else
				return ((I*)a)->num - ((I*)b)->num;
		}
	}
}
