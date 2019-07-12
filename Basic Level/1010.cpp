#include<stdio.h>


int main()
{
	char ch;
	int factor, power;
	int flag = 0;
	do
	{
		scanf("%d %d", &factor, &power);
		ch = getchar();
		if (power == 0)
		{
			if (flag == 0)
				printf("0 0");
		}
		else
		{
			if (flag == 0)
			{
				printf("%d %d", factor*power, power - 1);
				flag = 1;
			}
			else
				printf(" %d %d", factor*power, power - 1);
		}
	} while (ch != '\n');
	return 0;
}
