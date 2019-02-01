#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    vector<int> a(k);
    
    int sum = -1, temp = 0, left = 0, right = k - 1, tempidx = 0;
    for (int i = 0; i < k; i++) {
        cin >> a[i];
        temp = temp + a[i];
        if (temp < 0) {
            temp = 0;
            tempidx = i + 1;
        }
        else if (temp > sum) {
                sum = temp;
                left = tempidx;
                right = i;
        }
    }
    if (sum < 0)
        sum = 0;
    printf("%d %d %d", sum, a[left], a[right]);
    
    return 0;
}
