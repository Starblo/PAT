#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    int x = 0, y = 0;
    
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
        for (int j = 0; j < b.length(); j++)
            if (a[i] == b[j])
            {
                a[i] = '/';
                b[j] = '/';
            }
    
    for (int i = 0; i < a.length(); i++)
        if (a[i] != '/')
            x++;
    for (int i = 0; i < b.length(); i++)
        if (b[i] != '/')
            y++;
    
    if (y == 0)
        cout << "Yes " << x;
    else
        cout << "No " << y;
    return 0;
}
