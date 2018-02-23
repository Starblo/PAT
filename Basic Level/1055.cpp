#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct node
{
    string name;
    int height;
};

int comp(struct node a, struct node b)
{
    return a.height != b.height ? a.height > b.height : a.name < b.name;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<node> pic(n);
    for (int i = 0; i < n; i++)
        cin >> pic[i].name >> pic[i].height;
    
    sort(pic.begin(), pic.end(), comp);
    int t = 0, m;
    for (int q = k; q >= 1; q--)
    {
        if(q == k)
            m = n - n / k * (k - 1);
        else
            m = n / k;
        vector<string> stemp(m);
        stemp[m / 2] = pic[t].name;
        
        int j = m / 2 - 1;
        for(int i = t + 1; i < t + m; i = i + 2)
            stemp[j--] = pic[i].name;
        
        j = m / 2 + 1;
        for(int i = t + 2; i < t + m; i = i + 2)
            stemp[j++] = pic[i].name;
        
        cout << stemp[0];
        for(int i = 1; i < m; i++)
            cout << " " << stemp[i];
        cout << endl;
        t = t + m;
    }
    return 0;
}

