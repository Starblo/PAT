#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    string password;
    int n, num = 0;
    cin >> password >> n;
    
    getchar();
    while (1) {
        string in;
        getline(cin, in);
        if (in == "#")
            break;
        else {
            if (in == password && num <= n) {
                cout << "Welcome in" << endl;
                break;
            }
            else if(in != password && num <= n) {
                cout << "Wrong password: " << in << endl;
                num++;
                if (num == n) {
                    cout << "Account locked" << endl;
                    break;
                }
            }
        }
    }
    
    return 0;
}
