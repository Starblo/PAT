#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a(129, 0);
    string s;
    
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a')&&(s[i] <= 'z'))
            a[s[i]]++;
        else if((s[i] >= 'A')&&(s[i] <= 'Z'))
            a[(s[i] + 'a' - 'A')]++;
    }
    
    vector<int>::iterator max = max_element(a.begin() + 1, a.end());
    char c = (char)distance(a.begin(), max);
    cout << c << " " << *max;
}
