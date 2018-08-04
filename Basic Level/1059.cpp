#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int query (int n) {
    if (n == 1)
        return 0;
    else {
        int flag = 0;
        for (int i = 2; i <= sqrt(double(n)); i++) {
            if (n % i == 0)
                flag = 1;
        }
        if (flag)
            return 2;
        else
            return 1;
    }
}

int main() {
    
    int n;
    cin >> n;
    
    int id[n + 1], is[n + 1], rew[n + 1];
    for (int i = 1; i < n + 1; i++) {
        cin >> id[i];
        is[i] = 0;
        rew[i] = query(i);
    }
    
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int tosch, flag = 0;
        cin >> tosch;
        for (int j = 1; j < n + 1; j++) {
            if (id[j] == tosch) {
                flag = 1;
                if (is[j] == 0) {
                    is[j] = 1;
                    if (rew[j] == 0)
                        printf("%04d: Mystery Award\n", id[j]);
                    else if (rew[j] == 1)
                        printf("%04d: Minion\n", id[j]);
                    else
                        printf("%04d: Chocolate\n", id[j]);
                }
                else
                    printf("%04d: Checked\n", id[j]);
            }
        }
        if (!flag)
            printf("%04d: Are you kidding?\n", tosch);
    }
    
    return 0;
}


