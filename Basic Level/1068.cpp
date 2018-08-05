#include <iostream>
#include <map>
#include <vector>
using namespace std;

int m, n, tol;
vector<vector<int>> pixel;
int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};
bool judge(int i, int j) {
    for (int k = 0; k < 8; k++) {
        int tx = i + dir[k][0];
        int ty = j + dir[k][1];
        if (tx >= 0 && tx < n && ty >= 0 && ty < m && pixel[i][j] - pixel[tx][ty] >= 0 - tol && pixel[i][j] - pixel[tx][ty] <= tol)
            return false;
    }
    return true;
}

int main() {
    int x = 0, y = 0, num = 0;
    cin >> m >> n >> tol;
    pixel.resize(n, vector<int>(m));
    map<int, int> mp;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            // cin >> pixel[i][j];
            scanf("%d", &pixel[i][j]);
            if (mp.end() == mp.find(pixel[i][j]))
                mp.insert(pair<int, int>(pixel[i][j], 1));
            else
                mp.find(pixel[i][j])->second++;
        }
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (mp.find(pixel[i][j])->second == 1 && judge(i, j)) {
                x = i;
                y = j;
                num++;
                if (num == 2)
                    break;
            }
    
    if (num == 0)
        cout << "Not Exist" << endl;
    else if (num == 1)
        cout << "(" << y + 1 << ", " << x + 1 << "): " << pixel[x][y] << endl;
    else
        cout << "Not Unique" << endl;
    return 0;
}
