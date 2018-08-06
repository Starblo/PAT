#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> roop(n);
    for (int i = 0; i < n; i++)
        cin >> roop[i];
    
    sort(roop.begin(), roop.end());
    double length = roop[0];
    for (int i = 1; i < roop.size(); i++) {
        length = 1.0 * (length + roop[i]) / 2;
    }
    cout << (int)length;
    
    return 0;
}


