#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> qsort;
    vector<int> main_ele;
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        qsort.push_back(temp);
    }
    
    vector<bool> qst(qsort.size(), true);
    int max = 0;
    int min = 999999999;
    for (int i = 0; i < qsort.size(); i++)
    {
        if (qsort[i] >= max)
            max = qsort[i];
        else
            qst[i] = false;
    }
    
    for (int i = (int)(qsort.size() - 1); i >= 0; i--)
    {
        if (qsort[i] > min)
            qst[i] = false;
        else
            min = qsort[i];
    }
    
    for (int i = 0; i < qsort.size(); i++)
        if (qst[i])
            main_ele.push_back(qsort[i]);
    
    sort(main_ele.begin(), main_ele.end());
    cout << main_ele.size() << endl;
    if (main_ele.size() != 0)
    {
        for (int i = 0; i < main_ele.size() - 1; i++)
            cout << main_ele[i] << " ";
        cout << main_ele[main_ele.size() - 1];
    }
    cout << endl; //有毒吧
    return 0;
}
