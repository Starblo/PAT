#include<stdio.h>

int main()
{
	int a[100], flag[100], store[100];
	int i, j, k, num, temp;

	temp = 0;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		flag[i] = 0;
		scanf("%d", &a[i]);
	}

	for (i = 1; i <= num; i++)
		for (j = 1; j <= num - i; j++)
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}

	for (i = 1; i <= num; i++)
	{
		temp = a[i];
		while (temp != 1)
		{
			if (temp % 2 == 0)
				temp = temp / 2;
			else
				temp = (3 * temp + 1) / 2;
			for (j = 1; j <= num; j++)
				if (temp == a[j])
					flag[j] = 1;
		}
	}
	
	k = 1;
	for (i = 1; i <= num; i++)
		if (flag[i] == 0)
			store[k++] = a[i];
	k--;

	for (i = k; i > 1; i--)
		printf("%d ", store[i]);
	printf("%d", store[1]);
	
	return 0;
}
