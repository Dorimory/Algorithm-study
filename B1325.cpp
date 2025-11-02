#include <bits/stdc++.h>
using namespace std;

vector<int> graph[10001];
int N, M;
int cnt[10001];

int bfs(int start) {
    queue<int> q;
    vector<bool> visited(N + 1, false);

    q.push(start);
    visited[start] = true;
    int count = 1;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int next : graph[cur]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
                count++;
            }
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    while (M--) {
        int A, B;
        cin >> A >> B;
        // B를 해킹하면 A도 해킹 가능 → 역방향 저장
        graph[B].push_back(A);
    }

    int maxHack =
