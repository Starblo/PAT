#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

char search(char a) {
    switch (a) {
        case 'A':
            return '1';
        case 'B':
            return '2';
        case 'C':
            return '3';
        case 'D':
            return '4';
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    string password;
    for (int i = 0; i < n; i++) {
        char a, b, c, d, aa, ba, ca, da;
        getchar();
        scanf("%c-%c %c-%c %c-%c %c-%c", &a, &aa, &b, &ba, &c, &ca, &d, &da);
        if (aa == 'T')
            password = password + search(a);
        else if (ba == 'T')
            password = password + search(b);
        else if (ca == 'T')
            password = password + search(c);
        else if (da == 'T')
            password = password + search(d);
    }
    cout << password;
    return 0;
}
