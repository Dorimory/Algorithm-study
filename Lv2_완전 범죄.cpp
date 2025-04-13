#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int solution(vector<vector<int>> info, int n, int m) {
    const int INF = INT_MAX / 2;
    int itemCount = info.size();
    vector<vector<int>> dp(itemCount + 1, vector<int>(m, INF)); // dp[i][j] = i번째까지 봤을 때 B의 흔적 j일 때 A의 최소 흔적
    dp[0][0] = 0; // 초기 상태

    for (int i = 0; i < itemCount; ++i) {
        vector<vector<int>> nextDp = dp;
        for (int bTrace = 0; bTrace < m; ++bTrace) {
            if (dp[i][bTrace] == INF) continue;

            // A도둑이 i번째 물건 훔침
            int aAdd = info[i][0];
            if (dp[i][bTrace] + aAdd < n)
                nextDp[i + 1][bTrace] = min(nextDp[i + 1][bTrace], dp[i][bTrace] + aAdd);

            // B도둑이 i번째 물건 훔침
            int bAdd = info[i][1];
            if (bTrace + bAdd < m)
                nextDp[i + 1][bTrace + bAdd] = min(nextDp[i + 1][bTrace + bAdd], dp[i][bTrace]);
        }
        dp = nextDp;
    }

    // 최종 결과: i번째까지 모두 훔쳤을 때 B도둑 흔적 < m 인 상태 중 A 흔적 최소값
    int result = INF;
    for (int bTrace = 0; bTrace < m; ++bTrace) {
        result = min(result, dp[itemCount][bTrace]);
    }

    return result < n ? result : -1;
}
