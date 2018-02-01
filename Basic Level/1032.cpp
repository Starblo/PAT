#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int id, score;
    
    cin >> n;
    vector<int> list(n + 1, 0);
    for (int i = 0; i < n; i++)
        {
            cin >> id >> score;
            list[id] = list[id] + score;
        }
    vector<int>::iterator max = max_element(list.begin(), list.end());
    cout << distance(list.begin(), max) << " " << *max;
    return 0;
}
