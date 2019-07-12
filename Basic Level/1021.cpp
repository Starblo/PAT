#include<stdio.h>
#include<memory.h>

int main()
{
	int a[10];
	int temp, i;
	char m[1002];

	memset(a, 0, sizeof(a));
	scanf("%s", m);
	while (m[i] != '\0')
	{
		temp = m[i] - '0';
		switch (temp)
		{
		case 0:a[0]++; break;
		case 1:a[1]++; break;
		case 2:a[2]++; break;
		case 3:a[3]++; break;
		case 4:a[4]++; break;
		case 5:a[5]++; break;
		case 6:a[6]++; break;
		case 7:a[7]++; break;
		case 8:a[8]++; break;
		case 9:a[9]++; break;
		}
		i++;
	}
	for (i = 0; i <= 9; i++)
		if (a[i])
			printf("%d:%d\n", i, a[i]);
	return 0;
}
