#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

struct node {
    string name;
    double r;
};

int main() {
    int n;
    cin >> n;
    vector<node> v(n);
    for (int i = 0; i < n; i++) {
        string s;
        int x, y;
        cin >> s >> x >> y;
        double r = sqrt(x * x + y * y);
        v[i].name = s;
        v[i].r = r;
    }
    int max = 0, min = 0;
    for (int i = 1; i < n; i++) {
        if (v[i].r > v[max].r)
            max = i;
        else if (v[i].r < v[min].r)
            min = i;
    }
    cout << v[min].name << " " << v[max].name;
    return 0;
}

