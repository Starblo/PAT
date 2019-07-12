#include<stdio.h>
int main()
{
	char n[100];
	int sum, power;
	int i, ri, woc;

	i = 0;
	while ((n[i] = getchar()) != '\n')
		i++;

	sum = 0;
	for (ri = 0; ri < i; ri++)
		sum = sum + n[ri] - '0';


	power = 1;
	woc = 0;
	while ((sum / power > 9) || (sum / power < 1))
	{
		power = power * 10;
		woc++;
	}
		

	for(i=1;i<=woc+1;i++)
	{
		switch (sum/power)
		{
		case 1:printf("yi"); break;
		case 2:printf("er"); break;
		case 3:printf("san"); break;
		case 4:printf("si"); break;
		case 5:printf("wu"); break;
		case 6:printf("liu"); break;
		case 7:printf("qi"); break;
		case 8:printf("ba"); break;
		case 9:printf("jiu"); break;
		case 0:printf("ling"); break;
		}
		sum = sum%power;
		power = power / 10;
		if (i<=woc)
			printf(" ");
	}
	return 0;
}
