#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

struct school {
    string name;
    double score;
    int num;
};

bool comp(school a, school b) {
    if (a.score != b.score)
        return a.score > b.score;
    else if (a.num != b.num)
        return a.num < b.num;
    else
        return a.name < b.name;
}

string tolowercase (string s) {
    for (int i = 0; i < s.length(); i++) 
        s[i] = tolower(s[i]);
    return s;
}

int main() {
    int n;
    vector<school> scl;
    map<string, int> idx;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s, sch;
        double score;
        cin >> s >> score >> sch;
        if (s[0] == 'T')
            score = score * 1.5;
        else if (s[0] == 'A')
            score = score * 1.0;
        else if (s[0] == 'B')
            score = score / 1.5;
        sch = tolowercase(sch);

        if (idx.find(sch) == idx.end()) {
            struct school temp = {sch, score, 1};
            scl.push_back(temp);
            idx.insert(pair<string, int>(sch, scl.size() - 1));
        }
        else {
            scl[idx.find(sch)->second].score += score;
            scl[idx.find(sch)->second].num++;
        }
    }
    for (int i = 0; i < scl.size(); i++)
        scl[i].score = (int)scl[i].score;
    sort(scl.begin(), scl.end(), comp);
    cout << scl.size() << endl;
    int p = 1, pn = 1;
    for (int i = 0; i < scl.size(); i++) {
        cout << p << " " << scl[i].name << " " << (int)scl[i].score << " " << scl[i].num << endl;
        pn++;
        if (scl[i + 1].score < scl[i].score)
            p = pn;
    }
    return 0;
}
