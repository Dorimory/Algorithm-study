#include <iostream>
#include <algorithm>
#define MAX 10
using namespace std;

int N;
bool visit[MAX];
int g[MAX][MAX];
int ans = 1e9;

void dfs(int depth, int start, int prev, int cost) {
    if (depth == N) {
        if (g[prev][start] == 0) return;
        ans = min(ans, cost + g[prev][start]);
        return;
    }
    for (int i = 0; i < N; i++) {
        if (visit[i] || g[prev][i] == 0) continue;
        visit[i] = 1;
        dfs(depth + 1, start, i, cost + g[prev][i]);
        visit[i] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> g[i][j];

    for (int i = 0; i < N; i++) {
        visit[i] = 1;
        dfs(1, i, i, 0);
        visit[i] = 0;
    }
    cout << ans;
    return 0;
}
