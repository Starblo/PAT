#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int comp(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}

int main() {
    
    int n, i;
    cin >> n;
    int dis[n];
    for (int j = 0; j < n; j++)
        cin >> dis[j];
    
    qsort(dis, n, sizeof(int), comp);
    
    for (i = 0; i < n; i++)
        if (dis[i] <= i + 1)
            break;
    
    cout << i;
    
    return 0;
}


