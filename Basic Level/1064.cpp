#include <iostream>
#include <set>
#include <string>
#include <math.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    set<int> sett;
    for (int i = 0; i < n; i++) {
        int tomo = 0, temp;
        cin >> temp;
        while (temp != 0) {
            tomo = tomo + temp % 10;
            temp = temp / 10;
        }
        sett.insert(tomo);
    }
    
    cout << sett.size() << endl;
    for (auto itera = sett.begin(); itera != sett.end(); itera++) {
        if (itera != sett.begin())
            cout << " ";
        cout << *itera;
    }
    return 0;
}
