#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;
    
    int score[m], ans[m];
    for (int i = 0; i < m; i++)
        cin >> score[i];
    for (int i = 0; i < m; i++)
        cin >> ans[i];
    
    for (int i = 0; i < n; i++) {
        int test[m], sco = 0;
        for (int j = 0; j < m; j++) {
            cin >> test[j];
            if (test[j] == ans[j])
                sco = sco + score[j];
        }
        cout << sco << endl;
    }
    
    return 0;
}


