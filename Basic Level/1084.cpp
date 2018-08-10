#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main() {
    int n, j;
    string s;
    cin >> s >> n;
    for (int k = 1; k < n; k++) {
        string temp;
        for (int i = 0; i < s.length(); i = j) {
            for (j = i; j < s.length() && s[j] == s[i]; j++);
        temp = temp + to_string((s[i] - '0') * 10 + j - i);
    }
        s = temp;
    }
    cout << s;
    return 0;
}

