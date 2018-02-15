#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, d;
    double e;
    int mun = 0, un = 0;
    
    cin >> n >> e >> d;
    for (int i = 0; i < n; i++)
    {
        int k, sum = 0;
        double x;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> x;
            if (x < e)
                sum++;
        }
        if (sum > (k / 2))
        {
            if(k > d)
                un++;
            else
                mun++;
        }
    }
    
    double dmun = double(mun) / n * 100;
    double dun = double(un) / n * 100;
    printf("%.1f%% %.1f%%", dmun, dun);
    
    return 0;
}
