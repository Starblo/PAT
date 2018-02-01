#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    long long int p;
    int max_c = 1;
    cin >> n >> p;
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    vector<long long int> l(n);
    for(int i = 0; i < n; i++)
        cin >> l[i];
    sort(l.begin(), l.end());
    
    for (int i = 0; i < n - 1; i++)
        for(int right = i + max_c; right < n; right++)
        {
            if (l[right] > l[i] * p)
                break;
            if (right - i + 1 > max_c)
                max_c = right - i + 1;
        }
    
    cout << max_c;
    return 0;
}
