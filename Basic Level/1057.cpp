#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    int sum = 0, one = 0, zero = 0;
    
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
        if (isalpha(s[i])) {
            s[i] = toupper(s[i]);
            sum = sum + s[i] - 'A' + 1;
        }
    while (sum != 0) {
        if (sum % 2 == 1)
            one++;
        else
            zero++;
        sum = sum / 2;
    }
    
    cout << zero << " " << one;
    
    return 0;
}
