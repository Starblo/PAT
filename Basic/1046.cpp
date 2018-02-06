#include <iostream>
using namespace std;

int main()
{
    int n;
    int a = 0, b = 0;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ad, ac, bd, bc;
        cin >> ad >> ac >> bd >> bc;
        if ((ac == ad + bd)&&(bc != ad + bd))
            b++;
        if ((ac != ad + bd)&&(bc == ad + bd))
            a++;
    }
    cout << a << " " << b;
    return 0;
}
