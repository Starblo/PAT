#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    int temp;
    vector<int> score(105, 0);
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        score[temp]++;
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> temp;
        if (i != 0)
            cout << " ";
        cout << score[temp];
    }
    return 0;
}
