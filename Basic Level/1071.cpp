#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    int t, k;
    cin >> t >> k;
    
    for (int i = 0; i < k; i++) {
        int n1, b, t1, n2;
        cin >> n1 >> b >> t1 >> n2;
        
        if (t - t1 < 0)
            cout << "Not enough tokens.  Total = " << t << "." << endl;
        else if ((!b && n1 > n2)||(b && n1 < n2)) {
            cout << "Win " << t1 << "!  Total = " << t + t1 << "." << endl;
            t = t + t1;
        }
        else {
            cout << "Lose " << t1 << ".  Total = " << t - t1 << "." << endl;
            t = t - t1;
            if (!t) {
                cout << "Game Over." << endl;
                break;
            }
        }
    }
    return 0;
}


