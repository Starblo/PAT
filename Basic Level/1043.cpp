#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    string a = "PATest";
    vector<int> num(6, 0);
    cin >> s;
    
    for (int i = 0; i < s.length(); i++)
        for (int j = 0; j < a.length(); j++)
            if (s[i] == a[j])
                num[j]++;
    
    while(true)
    {
        for (int i = 0; i < 6; i++)
            if (num[i] > 0)
            {
                cout << a[i];
                num[i]--;
            }
        if (num[0] == 0&&num[1] == 0&&num[2] == 0&&num[3] == 0&&num[4] == 0&&num[5] == 0)
            break;
    }
    return 0;
}
