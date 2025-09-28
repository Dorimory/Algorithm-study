#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<long long> T(n);
    for (int i = 0; i < n; i++) {
        cin >> T[i];
    }

    // 처음 m일 합
    long long current_sum = 0;
    for (int i = 0; i < m; i++) {
        current_sum += T[i];
    }

    long long max_sum = current_sum;

    // 슬라이딩 윈도우
    for (int i = m; i < n; i++) {
        current_sum += T[i] - T[i - m];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    cout << max_sum << "\n";
    return 0;
}
