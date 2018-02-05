#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> num(1005);
    vector<int> a(1005), b(1005);
    vector<int> q(1005);
    int n, m;
    
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> num[i] >> a[i] >> b[i];
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> q[i];
    
    for (int i = 0; i < m; i++)
    {
        vector<int>::iterator result = find(a.begin(), a.end(), q[i]);
        cout << num[result - a.begin()] << " " << b[result - a.begin()] << endl;
    }
}
