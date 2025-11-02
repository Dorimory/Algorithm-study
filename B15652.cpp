#include <iostream>
using namespace std;

int N, M;
int arr[9];

void solve(int cnt, int start) {
    if (cnt == M) {
        for (int i = 0; i < M; i++)
            cout << arr[i] << " ";
        cout << "\n";
        return;
    }
    for (int i = start; i <= N; i++) {
        arr[cnt] = i;
        solve(cnt + 1, i); // 다음 선택에 같은 숫자 허용
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;
    solve(0, 1);
    return
