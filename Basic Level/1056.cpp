#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a[10];
    vector<int> buc(10, 0);
    int sum = 0;
    
    cin >> n ;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        buc[a[i]]++;
    }
    for (int i = 0; i < 10; i++) {
        if (buc[i] > 1) {
                for (int j = i; j < 10; j++)
                    if (buc[j] > 0) {
                        if (i != j)
                            sum = sum + i * 10 + j + j * 10 + i;
                        else
                            sum = sum + i * 10 + j;
//                        cout << i << "  " << j << endl;
                    }
        }
        else if (buc[i] == 1) {
            for (int j = i + 1; j < 10; j++)
                if (buc[j] > 0) {
                    sum = sum + i * 10 + j + j * 10 + i;
//                    cout << i << "  " << j << endl;
                }
        }
    }
    
    cout << sum;
    

    
    return 0;
}
