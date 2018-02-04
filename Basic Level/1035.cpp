#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int n;
vector<int> pre(105), sorted(105), ppre(105);

void config();
void merge(int a, int b);
bool compare();

int main()
{
    
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> pre[i];
    for (int i = 0; i < n; i++)
        cin >> sorted[i];
    config();
}

void config()
{
    bool flag = false;
    ppre = pre;
    //insert-sort
    for(int i = 1; i < n; i++)
    {
        int temp = pre[i];
        for(int j = i - 1; j >= 0; j--)
            if (pre[j] > temp)
            {
                pre[j + 1] = pre[j];
                pre[j] = temp;
            }
        if (flag)
        {
            for (int j = 0; j < n - 1; j++)
                cout << pre[j] << " ";
            cout << pre[n - 1];
            return;
        }
        if (compare() == true)
        {
            cout << "Insertion Sort" << endl;
            flag = true;
        }
    }
    
    pre = ppre;
    //merge-sort
    int step = 1;
    while (step < n)
    {
        for (int i = 0; i < n - step; i = i + 2 * step)
            merge(i, i + step);
        step = step * 2;
        if (flag)
        {
            for (int j = 0; j < n - 1; j++)
                cout << pre[j] << " ";
            cout << pre[n - 1];
            return;
        }
        if (compare() == true)
        {
            cout << "Merge Sort" << endl;
            flag = true;
        }
    }
}

void merge(int a, int b)
{
    int step = b - a;
    int ai = a, bi = b, i = 0;
    int right;
    if(b + step < n)
        right = step;
    else
        right = n - b;
    
    vector<int> temp(step + right);
    while ((ai < b)&&(bi < b + right))
    {
        if(pre[ai] < pre[bi])
            temp[i++] = pre[ai++];
        else
            temp[i++] = pre[bi++];
    }
    if (ai == b)
        memcpy(&temp[i], &pre[bi], (a + step + right - bi) * sizeof(int));
    else
        memcpy(&temp[i], &pre[ai], (b - ai) * sizeof(int));
    memcpy(&pre[a], &temp[0], (step + right) * sizeof(int));
}

bool compare()
{
    for (int i = 0; i < n; i++)
        if(sorted[i] != pre[i])
            return false;
    return true;
}
