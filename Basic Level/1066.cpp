#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    
    int m, n, a, b, v;
    cin >> m >> n >> a >> b >> v;
    
    int pixel[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> pixel[i][j];
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j != 0)
                cout << " ";
            if (pixel[i][j] >= a && pixel[i][j] <= b)
                printf("%03d", v);
            else
                printf("%03d", pixel[i][j]);
        }
        cout << endl;
    }
    return 0;
}
