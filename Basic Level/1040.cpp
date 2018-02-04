#include <iostream>
using namespace std;

int main()
{
    long int count = 0;
    string s;
    int a = 0, t = 0;
    
    cin >> s;
    for (long i = s.length(); i >=0; i--)
    {
        if (s[i] == 'T')
            t++;
        else if (s[i] == 'A')
            a = a + t;
        else
            count = count + a;
    }
    
    cout << count % 1000000007;
}
