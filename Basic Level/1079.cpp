#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string add(string a, string b) {
    int carry = 0;
    string c;
    for (int i = 0; i < a.length(); i++) {
        int m = (a[i] + b[i] + carry - 2 * '0') % 10;
        c.insert(c.begin(), m + '0');
        carry = (a[i] + b[i] + carry - 2 * '0') / 10;
    }
    if (carry)
        c.insert(c.begin(), carry + '0');
    return c;
}

int main() {
    string s;
    cin >> s;
    int i;
    for (i = 0; i < 10; i++) {
        string rever_s = s;
        reverse(rever_s.begin(), rever_s.end());
        if (rever_s == s) {
            cout << s << " is a palindromic number.";
            break;
        }
        else {
            cout << s << " + " << rever_s << " = " << add(s, rever_s) <<endl;
            s = add(s, rever_s);
        }
    }
    if (i == 10)
        cout << "Not found in 10 iterations." << endl;

    return 0;
}
