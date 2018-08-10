#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> idx;
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    for (int i = 0; i < n; i++) {
        int x = v[i] > i + 1 ? v[i] - i - 1 : i + 1 - v[i];
            if(idx.find(x) == idx.end())
                idx.insert(pair<int, int>(x, 1));
            else
                idx.find(x)->second++;
    }
    for (map<int, int>::iterator iter = idx.end(); iter != idx.begin(); iter--)
        if (iter->second != 1 && iter != idx.end())
            cout << iter->first << " " << iter->second << endl;
    if (idx.begin()->second != 1)
        cout << idx.begin()->first << " " << idx.begin()->second << endl;
    return 0;
}
