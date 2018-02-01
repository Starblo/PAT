#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    int flag = 0;
    int wei[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char m[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    
    cin >> n;
    vector<string> id(n);
    for (int i = 0; i < n; i++)
        cin >> id[i];
    
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < 17; j++)
            sum = sum + wei[j] * (id[i][j] - '0');
        
        if(m[sum % 11] != id[i][17])
        {
            flag = 1;
            cout << id[i] << endl;
        }
    }
    if(!flag)
        cout << "All passed" << endl;
    
    return 0;
}
