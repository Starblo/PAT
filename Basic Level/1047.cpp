#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    vector<int> team(1005, 0);
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tm, tmm, score;
        scanf("%d-%d%d", &tm, &tmm, &score);
        team[tm] = team[tm] + score;
    }
    vector<int>::iterator max = max_element(team.begin(), team.end());
    cout << max - team.begin() << " " << *max;
    return 0;
}
