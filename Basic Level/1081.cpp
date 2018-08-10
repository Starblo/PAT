#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        if (s.length() < 6) {
            cout << "Your password is tai duan le." << endl;
            continue;
        }
        bool notp = false, word = false, num = false;
        for (int j = 0; j < s.length(); j++) {
            if (isdigit(s[j]))
                num = true;
            else if (isalpha(s[j]))
                word = true;
            else if (s[j] != '.' && !isalpha(s[j]) && !isdigit(s[j]))
                notp = true;
        }
        if (notp)
            cout << "Your password is tai luan le." << endl;
        else if (!num) 
            cout << "Your password needs shu zi." << endl;
        else if (!word)
            cout << "Your password needs zi mu." << endl;
        else
            cout << "Your password is wan mei." << endl;
    }


    return 0;
}
