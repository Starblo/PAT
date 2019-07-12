#include<stdio.h>
#include<math.h>

int main()
{
	char a[65], b[65], c[65], d[65];
	int i, dd, hh, mm, flag, count;

	scanf("%s%s%s%s", a, b, c, d);

	i = flag = 0;
	count = -1;
	while (a[i] != '\0'&&b[i] != '\0')
	{
		if (a[i] == b[i] && flag == 0 && a[i] >= 'A'&&a[i] <= 'G')
		{
			dd = a[i] - 'A' + 1;
			flag = 1;
		}
		else if (a[i] == b[i] && flag == 1 && ((a[i] >= '0'&&a[i] <= '9') || (a[i] >= 'A'&&a[i] <= 'N')))
		{
			if (a[i] >= '0'&&a[i] <= '9')
				hh = a[i] - '0';
			else if (a[i] >= 'A'&&a[i] <= 'N')
				hh = a[i] - 'A' + 10;
			break;
		}
		i++;
	}
	i = 0;
	while (c[i] != '\0'&&d[i] != '\0')
	{
		if (c[i] == d[i]&&((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z')))
		{
			count++;
			mm = count;
			break;
		}
		else
			count++;
		i++;
	}

	switch (dd)
	{
		case 1:printf("MON "); break;
		case 2:printf("TUE "); break;
		case 3:printf("WED "); break;
		case 4:printf("THU "); break;
		case 5:printf("FRI "); break;
		case 6:printf("SAT "); break;
		case 7:printf("SUN "); break;
	}	
	printf("%02d:%02d", hh, mm);	
	return 0;
}
