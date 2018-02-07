#include <iostream>
using namespace std;

int main()
{
    int n;
    double sum = 0.0;
    double seq[100001];
    
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> seq[i];
        sum = sum + seq[i] * i * (n - i + 1);
    }
    printf("%.2f", sum);
    return 0;
}
