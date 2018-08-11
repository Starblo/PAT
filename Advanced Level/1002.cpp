#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main() {
    int k1, k2;
    cin >> k1;
    int max = 0;
    vector<double> p1(1001, 0);
    for (int i = 0; i < k1; i++) {
        int idx;
        cin >> idx;
        cin >> p1[idx];
        if (idx > max)
            max = idx;
    }
    cin >> k2;
    vector<double> p2(1001, 0);
    for (int i = 0; i < k2; i++) {
        int idx;
        cin >> idx;
        cin >> p2[idx];
        if (idx > max)
            max = idx;
    }
    int cnt = 0;
    vector<double> p(max + 1);
    for (int i = 0; i <= max; i++) {
        p[i] = p1[i] + p2[i];
        if (p[i])
            cnt++;
    }
    cout << cnt;
    for (int i = max; i >= 0; i--)
        if (p[i])
            printf(" %d %.1lf", i, p[i]);

    return 0;
}
