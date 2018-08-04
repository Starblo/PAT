#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, m, choice;
    int score[105];
    vector<int> err(105, 0), corr(105, 0);
//
//    for (int i = 0; i < 105; i++)
//        for (int j = 0; j < 5; j++)
//            corr[i][0] = 0;
    
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int num;
        cin >> score[i] >> choice >> num;
        for (int j = 0; j < num; j++) {
            char temp;
            cin >> temp;
            switch (temp) {
                case 'a':
                    corr[i] = corr[i] + 1; break;
                case 'b':
                    corr[i] = corr[i] + 2; break;
                case 'c':
                    corr[i] = corr[i] + 4; break;
                case 'd':
                    corr[i] = corr[i] + 8; break;
                case 'e':
                    corr[i] = corr[i] + 16; break;
                default:
                    break;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        scanf("\n");
        int tot = 0;
        for (int j = 0; j < m; j++) {
            int num, _corr = 0;
            if (j != 0)
                scanf(" ");
            scanf("(%d", &num);
            for (int k = 0; k < num; k++) {
                char temp;
                scanf(" %c", &temp);
                switch (temp) {
                    case 'a':
                        _corr = _corr + 1; break;
                    case 'b':
                        _corr = _corr + 2; break;
                    case 'c':
                        _corr = _corr + 4; break;
                    case 'd':
                        _corr = _corr + 8; break;
                    case 'e':
                        _corr = _corr + 16; break;
                    default:
                        break;
                }
            }
            scanf(")");
            
            if (_corr == corr[j])
                tot = tot + score[j];
            else
                err[j]++;
        }
        cout << tot << endl;
    }
    
    int max = 0;
    for (int i = 0; i < m; i++)
        if (err[i] > max)
            max = err[i];
    if (max == 0)
        cout << "Too simple";
    else {
        cout << max;
        for (int i = 0; i < m; i++) {
            if (err[i] == max)
                cout << " " << i + 1;
        }
    }
    return 0;
}


