#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> thing(m);
    for (int i = 0; i < m; i++)
        cin >> thing[i];
    
    int stu = 0, thg = 0;
    for (int i = 0; i < n; i++) {
        string name;
        int num;
        vector<int> bring;
        
        cin >> name >> num;
        for (int i = 0; i < num; i++) {
            int temp;
            cin >> temp;
            for (int j = 0; j < m; j++)
                if (thing[j] == temp) {
                    bring.push_back(temp);
                    thg++;
                }
        }
        
        if (!bring.empty()) {
            stu++;
            cout << name << ":";
            for (int i = 0; i < bring.size(); i++)
                printf(" %04d", bring[i]);
            cout << endl;
        }
    }
    cout << stu << " " << thg << endl;
    return 0;
}
