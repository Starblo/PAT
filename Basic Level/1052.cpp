#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <vector<string>> st(3);
    for (int i = 0; i < 3; i++)
    {
        string s;
        getline(cin, s);
        for (int j = 0; j < s.length(); j++)
        {
            int k = j;
            if (s[j] == '[')
            {
                while (s[k] != ']')
                    k++;
                st[i].push_back(s.substr(j + 1, k - j - 1));
            }
        }
    }
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if (a <= st[0].size()&&a > 0&&b <= st[1].size()&&b > 0&&c <= st[2].size()&&c > 0&&d <= st[1].size()&&d > 0&&e <= st[0].size()&&e > 0)
            cout << st[0][a - 1] << '(' << st[1][b - 1] << st[2][c - 1] << st[1][d - 1] << ')' << st[0][e - 1] << endl;
        else
            cout << "Are you kidding me? @\\/@" << endl;
    }
    return 0;
}
