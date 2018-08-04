#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    double r = 0.0;
    for (int i = 0; i < n; i++) {
        int s, x;
        double tempr;
        cin >> s >> x;
        tempr = sqrt(s * s + x * x);
        if (tempr > r)
            r = tempr;
    }
    printf("%.2lf", r);
    return 0;
}


