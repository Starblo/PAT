#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int tonum(string s)
{
    int num = 0;
    for (int i = 0; i < s.length(); i++)
        num = num * 10 + s[i] - '0';
    return num;
}

int main()
{
    int n;
    vector<string> a = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    vector<string> b = {"", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    string s;
    
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        string split[2];
        if (s[0] <= '9'&&s[0] >= '0')
        {
            int num = tonum(s);
            if (num < 13)
                cout << a[num] << endl;
            else if (num % 13 == 0)
                cout << b[num / 13] << endl;
            else
                cout << b[num / 13] << " " << a[num % 13] << endl;
        }
        else
        {
            int len = 1;
            int num = 0;
            if (s.length() == 3)
            {
                vector<string>::iterator fd;
                fd = find(a.begin(), a.end(), s);
                if ((fd - a.begin() > 0)&&(fd - a.begin() < 13))
                    num = num + (int)(fd - a.begin());
                else
                {
                    fd = find(b.begin(), b.end(), s);
                    num = num + (int)(fd - b.begin()) * 13;
                }
            }
            else if (s.length() == 4)
                num = 0;
            else if (s.length() == 7)
            {
                split[0] = s.substr(0, 3);
                split[1] = s.substr(4, 3);
                len = 2;
                for (int i = 0; i < len; i++)
                {
                    vector<string>::iterator fd;
                    if (i == 0)
                    {
                        fd = find(b.begin(), b.end(), split[i]);
                        num = num + (int)(fd - b.begin());
                    }
                    else
                    {
                        fd = find(a.begin(), a.end(), split[i]);
                        num = num * 13 + (int)(fd - a.begin());
                    }
                }
            }
            cout << num << endl;
        }
    }
    return 0;
}
