#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main() {
	string a;
    cin >> a;
	int num = a.length() + 2;
	int n1 = num / 3;
	int n2 = num - 2 * n1;

	for (int i = 0; i < n1 - 1; i++) {
		cout << a[i];
		for (int j = 0; j < n2 - 2; j++)
			cout << " ";
		cout << a[num - 3 - i] << endl;
	}
	for (int i = 0; i < n2; i++) 
		cout << a[n1 - 1 + i];
    return 0;
}
