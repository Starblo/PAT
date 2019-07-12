#include<stdio.h>
int main()
{
	char a[100];
	int i, ri, x, k, m;
	int repeat;
	int flag;

	scanf("%d", &repeat);
	getchar();
	for (ri = 1; ri <= repeat; ri++)
	{
		i = 0;
		while ((a[i] = getchar()) != '\n')
			i++;
		a[i] = '\0';
				
		i = 0;
		x = 0;
		if (a[i] == 'A')
			while (a[i] == 'A')
			{
				i++;
				x++;
			}
		else if (a[i] == '\0')
			flag =1;

		if (a[i] != 'P')
			flag = 0;
		else
		{
			i++;
			if (a[i] != 'A')
				flag = 0;
			else
			{
				i++;
				if (a[i] == 'T')
				{
					i++;
					for (k = 0; k < x; k++)
						if (a[i + k] != 'A')
						{
							flag = 0;
							break;
						}
					
					if (k == x&&a[i+k]=='\0')
						flag = 1;
				}
				else if (a[i] == 'A')
				{
					m = 1;
					while (a[i] == 'A')
					{
						m++;
						i++;
					}
					if (a[i] == 'T')
					{
						i++;
						for (k = 0; k < m * x; k++)
							if (a[i + k] != 'A')
							{
								flag = 0;
								break;
							}

						if (k == m * x&&a[i + k] == '\0')
							flag = 1;
					}
					else
						flag = 0;
				}
			}
		}

		if (flag == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
