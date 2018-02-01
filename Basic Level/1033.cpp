#include <iostream>
#include <string>
using namespace std;

int main()
{
    string key, str, toprint;
    bool upper = true;
    getline(cin, key);
    cin >> str;
    
    for (int i = 0; i < key.length(); i++)
    {
        if (key[i] == '+')
            upper = false;
        else if((key[i] >= 'A')&&(key[i] <= 'Z'))
            key[i] = key[i] + ('a' - 'A');
    }
    
    for (int i = 0; i < str.length(); i++)
    {
        if(!upper && ((str[i] >= 'A')&&(str[i] <= 'Z')))
            continue;
        bool find = false;
        for (int j = 0; j <= key.length(); j++)
            if ((key[j] == str[i])||(((str[i] >= 'A')&&(str[i] <= 'Z'))&&(str[i] == key[j] - ('a' - 'A'))))
            {
                find = true;
                break;
            }
        if(!find||(str[i] == '+'))
            toprint.push_back(str[i]);
    }
    cout << toprint << endl;
}
