#include<stdio.h>

int main()
{
	int a[1090];
	int a_1sum, a_2sum, a_4sum, a_5max;
	double a_4ave;
	int n, i, i_1, i_2, i_3, i_4, i_5;
	int flag;

	flag = 1;
	i_1 = i_2 = i_3 = i_4 = i_5 = 0;
	a_1sum = a_2sum = a_4sum = a_5max = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] % 5 == 0)
		{
			if (a[i] % 2 == 0)
			{
				i_1++;
				a_1sum = a_1sum + a[i];
			}
		}
		else if (a[i] % 5 == 1)
		{
			i_2++;
			a_2sum = a_2sum + flag*a[i];
			flag = -flag;
		}
		else if (a[i] % 5 == 2)
			i_3++;
		else if (a[i] % 5 == 3)
		{
			i_4++;
			a_4sum = a_4sum + a[i];
		}
		else
		{
			i_5++;
			if (a[i] > a_5max)
				a_5max = a[i];
		}
	}

	a_4ave = 1.0* a_4sum / i_4;

	if (i_1 == 0)
		printf("N ");
	else
		printf("%d ", a_1sum);

	if(i_2==0)
		printf("N ");
	else
		printf("%d ", a_2sum);

	if (i_3 == 0)
		printf("N ");
	else
		printf("%d ", i_3);

	if (i_4 == 0)     
		printf("N ");
	else
		printf("%.1f ", a_4ave);

	if (i_5 == 0)
		printf("N");
	else
		printf("%d", a_5max);

	return 0;
}
