#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> graph[1001];
bool visited[1001];

void dfs(int node) {
    visited[node] = true;
    cout << node << " ";
    for (int next : graph[node]) {
        if (!visited[next])
            dfs(next);
    }
}

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (int next : graph[node]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    int n, m, v;
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a); // 양방향
    }

    for (int i = 1; i <= n; i++)
        sort(graph[i].begin(), graph[i].end()); // 번호가 작은 것부터

    // DFS
    fill(visited, visited + 1001, false);
    dfs(v);
    cout << "\n";

    // BFS
    fill(visited, visited + 1001, false);
    bfs(v);
    cout << "\n";
    return 0;
}
