#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <math.h>
#define MAXNUM 1005
using namespace std;

int n;
int graph[MAXNUM][MAXNUM];
bool visit[MAXNUM];

void dfs(int a) {
    visit[a] = true;
    for (int i = 1; i <= n; i++)
        if (!visit[i] && graph[a][i] == 1)
            dfs(i);
}

int main() {
    int m, k, a, b;
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        graph[a][b] = graph[b][a] = true;
    }
    for (int i = 0; i < k; i++) {
        fill(visit, visit + MAXNUM, false);
        scanf("%d", &a);
        int count = 0;
        visit[a] = true;
        for (int j = 1; j <= n; j++) {
            if (!visit[j]) {
                dfs(j);
                count++;
            }
        }
        printf("%d\n", count - 1);
    }
    return 0;
}
