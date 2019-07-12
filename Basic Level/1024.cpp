#include <iostream>
#include <string>
using namespace std;

int main()
{
	char a[10011];
	cin >> a;
	int i = 0, j;
	int flag1 = 0, flag2 = 0;
	double m;
	int b = 0;

	if (a[i] == '-')
		flag1 = 1;
	i++;
	while (a[i] != 'E')
		i++;
	i++;
	if (a[i] == '-')
		flag2 = 1;
	i++;

	while (a[i] != '\0')
	{
		b = b * 10 + a[i] - '0';
		i++;
	}

	if (flag1)
		cout << "-";
	if (flag2)
	{
		cout << "0.";
		for (j = 1; j < b; j++)
			cout << "0";
		cout << a[1];
		i = 3;
		while (a[i] != 'E')
			cout << a[i++];
	}
	else
	{
		cout << a[1];
		i = 3;
		while (b != 0)
		{
			if (a[i] == 'E')
				cout << "0";
			else
				cout << a[i++];
			b--;
		}
		if (a[i] != 'E')
			cout << ".";
		while (a[i] != 'E')
			cout << a[i++];
	}
}
