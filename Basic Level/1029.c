#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pre, now;
    string ans;
    cin >> pre >> now;
    
    for (int i = 0; i < pre.length(); i++)
        if(now.find(pre[i]) == string::npos && ans.find(toupper(pre[i])) == string::npos)
            ans += toupper(pre[i]);
    
    cout << ans;
    return 0;
}
