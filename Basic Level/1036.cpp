#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    char c;
    cin >> n >> c;
    
    int col = n;
    int raw = n / 2 + n % 2;
    
    for (int i = 0; i < col; i++)
        cout << c;
    cout << endl;
    
    for (int i = 1; i < raw - 1; i++)
    {
        cout << c;
        for (int j = 1; j < col - 1; j++)
            cout << " ";
        cout << c << endl;
    }
    
    for (int i = 0; i < col; i++)
        cout << c;
    cout << endl;
}
