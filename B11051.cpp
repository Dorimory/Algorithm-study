#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int dp[1001][1001] = { 0 };

    for (int i = 0; i <= N; i++) {
        dp[i][0] = 1;
        dp[i][i] = 1;
        for (int j = 1; j < i; j++) {
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
        }
    }

    cout << dp[N][K];
    return 0;
}
