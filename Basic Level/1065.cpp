#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    map<int, int> marrage;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        marrage.insert(pair<int, int>(a, b));
        marrage.insert(pair<int, int>(b, a));
    }
    
    int m;
    cin >> m;
    vector<int> guest;
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        guest.push_back(temp);
    }
    
    vector<int> s_guest;
    for (int i = 0; i < m; i++) {
        map<int, int>::iterator it;
        it = marrage.find(guest[i]);
        if (it == marrage.end())
            s_guest.push_back(guest[i]);
        else {
            vector<int>::iterator iter = find(guest.begin(), guest.end(), it->second);
            if (iter == guest.end())
                s_guest.push_back(guest[i]);
        }
    }
    
    sort(s_guest.begin(), s_guest.end());
    cout << s_guest.size() << endl;
    vector<int>::iterator it;
    for (it = s_guest.begin(); it != s_guest.end() ; it++) {
        if (it != s_guest.begin())
            cout << " ";
        printf("%05d", *it);
    }
    return 0;
}
