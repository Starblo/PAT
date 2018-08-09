#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int teac, total = 0;
        vector<int> sco;
        cin >> teac;
        for (int j = 1; j < n; j++) {
            int temp;
            cin >> temp;
            if (temp >= 0 && temp <= m) 
                sco.push_back(temp);
        }
        sort(sco.begin(), sco.end());
        for (int j = 1; j < sco.size() - 1; j++)
          total = total + sco[j];
        double ave = 1.0 * total / (sco.size() - 2);
        total = (ave + teac) / 2 + 0.5;
        cout << total << endl;
    }

    return 0;
}
