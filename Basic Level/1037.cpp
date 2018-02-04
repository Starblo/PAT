#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b ,c;
    int m, n, t;
    int x, y, z;
    int flag;
    
    scanf("%d.%d.%d",&a, &b, &c);
    scanf("%d.%d.%d",&m, &n, &t);
    if ((a > m)||(a == m && b > n)||(a == m && b == n && c > t))
        flag = 0;
    else
        flag = 1;
    
    if (flag == 0)
    {
        if (c >= t)
            z = c - t;
        else
        {
            z = c + 29 - t;
            b--;
        }
        if (b >= n)
            y = b - n;
        else
        {
            y = b + 17 - n;
            a--;
        }
        x = a - m;
        cout << "-" << x << "." << y << "." << z;
    }
    else
    {
        if (t >= c)
            z = t - c;
        else
        {
            z = t + 29 - c;
            n--;
        }
        if (n >= b)
            y = n - b;
        else
        {
            y = n + 17 - b;
            m--;
        }
        x = m - a;
        cout<< x << "." << y << "." << z;
    }
}
