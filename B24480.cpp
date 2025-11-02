#include <bits/stdc++.h>
using namespace std;

vector<int> graph[100001];
int visited[100001];
int order = 1;

void dfs(int node) {
    visited[node] = order++;

    for (int next : graph[node]) {
        if (!visited[next]) {
            dfs(next);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, R;
    cin >> N >> M >> R;

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // 내림차순 정렬
    for (int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end(), greater<int>());
    }

    dfs(R);

    for (int i = 1; i <= N; i++) {
        cout << visited[i] << "\n";
    }

    return 0;
}
