#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    // 최대 N이 40이므로 미리 DP 배열 준비
    int dp[41][2];

    // 초기 조건
    dp[0][0] = 1; dp[0][1] = 0;
    dp[1][0] = 0; dp[1][1] = 1;

    // DP 계산
    for (int i = 2; i <= 40; i++) {
        dp[i][0] = dp[i - 1][0] + dp[i - 2][0];
        dp[i][1] = dp[i - 1][1] + dp[i - 2][1];
    }

    while (T--) {
        int N;
        cin >> N;
        cout << dp[N][0] << " " << dp[N][1] << "\n";
    }

    return 0;
}
