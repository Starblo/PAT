#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> seq(n);
    for (int i = 0; i < n; i++)
        cin >> seq[i];
    
    int a, b;
    for (b = sqrt(double(n)); b > 0; b--)
        if (n % b == 0)
            break;
    a = n / b;
    sort(seq.begin(), seq.end());
    
    vector<vector <int>> mar(a);
    for(int i = 0; i < a; i++)
        mar[i].resize(b);
    
    int p = (int)seq.size() - 1;
    for (int i = 0; i < (b / 2 + b % 2); i++)
    {
        for (int j = i; j < b - i&&p >= 0; j++)
            mar[i][j] = seq[p--];
        for (int j = i + 1; j < a - i - 1&&p >= 0; j++)
            mar[j][b - i - 1] = seq[p--];
        for (int j = b - i - 1; j >= i&&p >= 0; j--)
            mar[a - i - 1][j] = seq[p--];
        for (int j = a - i - 2; j > i&&p >= 0; j--)
            mar[j][i] = seq[p--];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b - 1; j++)
            cout << mar[i][j] << " ";
        cout << mar[i][b - 1] << endl;
    }
    return 0;
}
