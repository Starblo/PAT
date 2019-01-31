#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

struct node {
    int isnode = 0;
    bool isleaf = true;
    int level = 0;
    int nxtslib = -1;
    int fstchil = -1;
    int parent = -1;
};

bool comp(node a, node b) {
    if (a.isnode != b.isnode)
        return a.isnode > b.isnode;
    if (a.level != b.level)
        return a.level < b.level;
    else
        return a.parent < b.parent;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<node> tree(101);
    
    // construct the tree
    for (int i = 0; i < m; i++) {
        int id, k, lid, nlid, parent;
        
        // non-leaf node
        cin >> id;
        parent = id;
        tree[id].isnode = 1;
        tree[id].isleaf = false;
        
        // leaf node
        cin >> k >> lid;
        tree[id].fstchil = lid;
        tree[lid].isnode = 1;
        tree[lid].parent = parent;
        for (int j = 1; j < k; j++) {
            cin >> nlid;
            tree[lid].nxtslib = nlid;
            tree[nlid].isnode = 1;
            tree[lid].parent = parent;
            lid = nlid;
        }
    }
    
    // update the level
    int j = 0;
    while ((tree[j].isnode != 1 || tree[j].isleaf || tree[j].parent != -1) && j < 101)
        j++;
    queue<int> q;
    q.push(j);
    tree[j].level = 1;
    while (!q.empty()) {
        int temp = q.front();
        q.pop();
        int level = tree[temp].level;
        if (tree[temp].fstchil != -1) {
            temp = tree[temp].fstchil;
            q.push(temp);
            tree[temp].level = level + 1;
            while (tree[temp].nxtslib != -1) {
                temp = tree[temp].nxtslib;
                q.push(temp);
                tree[temp].level = level + 1;
            }
        }
    }
    
    // sort
    sort(tree.begin(), tree.end(), comp);
    
    // output
    if (tree[0].isleaf)
        cout << 1;
    else
        cout << 0;
    for (int i = 1; i < 100 && tree[i].isnode == 1; i++) {
        int count = 0;
        while (tree[i + 1].level == tree[i].level && tree[i + 1].isnode) {
            if (tree[i].isleaf)
                count++;
            i++;
        }
        if (tree[i].isleaf)
            count++;
        cout << " " << count;
    }
    
    return 0;
}
