#include <iostream>
//#include <string>
using namespace std;

int tonum(char c)
{
    if (c >= '0'&&c <='9')
        return (c - '0');
    else if (c == 'J')
        return 10;
    else if (c == 'Q')
        return 11;
    else
        return 12;
}

char tochar(int n)
{
    if (n >= 0&&n <= 9)
        return (n + '0');
    else if (n == 10)
        return 'J';
    else if (n == 11)
        return 'Q';
    else
        return 'K';
}

int main()
{
    string a, b;
    
    cin >> a >> b;
    if (a.length() > b.length())
        b.insert(b.begin(), a.length() - b.length(), '0');
    else
        a.insert(a.begin(), b.length() - a.length(), '0');
    for (int i = (int)(b.length() - 1); i >= 0; i--)
    {
        if ((b.length() - i) % 2 != 0)
        {
            int temp = (tonum(a[i]) + tonum(b[i])) % 13;
            b[i] = tochar(temp);
        }
        else
        {
            int temp = tonum(b[i]) - tonum(a[i]);
            if (temp < 0)
                temp = temp + 10;
            b[i] = tochar(temp);
        }
    }
    cout << b << endl;
    return 0;
}
