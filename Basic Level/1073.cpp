#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, choice;
    cin >> n >> m;
    vector<int> score(m), err(m, 0);
    vector<vector<int>> corr(m, vector<int>(5, 0));
    vector<vector<int>> error(m, vector<int>(5, 0));
    
    for (int i = 0; i < m; i++) {
        int num;
        cin >> score[i] >> choice >> num;
        for (int j = 0; j < num; j++) {
            char temp;
            cin >> temp;
            corr[i][temp - 'a'] = 1;
        }
    }
    
    for (int i = 0; i < n; i++) {
        scanf("\n");
        double tot = 0.0;
        for (int j = 0; j < m; j++) {
            int num;
            if (j != 0)
                scanf(" ");
            scanf("(%d", &num);
            bool sco = true, full_sco = true;
            vector<int> stu_ans(5);
            for (int k = 0; k < num; k++) {
                char temp;
                scanf(" %c", &temp);
                if (!corr[j][temp - 'a'])
                    sco = false;
                stu_ans[temp - 'a'] = 1;
            }
            scanf(")");
            for (int k = 0; k < 5; k++)
                if (corr[j][k] != stu_ans[k]) {
                    full_sco = false;
                    error[j][k]++;
                }

            if (sco && full_sco)
                tot = tot + score[j];
            else if(sco && !full_sco)
                tot = tot + 1.0 * score[j] / 2;
            else
                err[j]++;
        }
        printf("%.1lf\n", tot);
    }
    
    int max = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < 5; j++)
            if (error[i][j] > max)
                max = error[i][j];
    if (max == 0)
        cout << "Too simple";
    else {
        for (int i = 0; i < m; i++)
            for (int j = 0; j < 5; j++)
                if (error[i][j] == max) {
                    char temp = 'a' + j;
                    cout << max << " " << i + 1 << "-" << temp << endl;
                }
    }
    return 0;
}
