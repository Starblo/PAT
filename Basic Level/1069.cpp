#include <iostream>
#include <map>
#include <vector>
using namespace std;


int main() {
    
    int m, n, s;
    vector<string>name;
    map<string, int>mp;
    bool ispicked = false;
    
    cin >> m >> n >> s;
    for (int i = 0; i < m; i++) {
        string temp;
        cin >> temp;
        name.push_back(temp);
        mp.insert(pair<string, int>(temp, 0));
    }
    
    for (int i = s - 1; i < name.size(); i = i + n) {
        while (mp.find(name[i])->second != 0)
            i++;
        cout << name[i] << endl;
        mp.find(name[i])->second++;
        ispicked = true;
    }
    
    if (!ispicked)
        cout << "Keep going..." << endl;
    
    return 0;
}
