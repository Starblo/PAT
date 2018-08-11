#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string s = to_string(a + b);
    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
        if (s[i] == '-')
          continue;
        if ((i + 1) % 3 == s.size() % 3 && i != s.size() - 1)
            cout << ',';
    }
    return 0;
}
