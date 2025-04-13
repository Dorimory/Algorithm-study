#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int solution(vector<vector<int>> info, int n, int m) {
    const int INF = INT_MAX / 2;
    int itemCount = info.size();
    vector<vector<int>> dp(itemCount + 1, vector<int>(m, INF)); // dp[i][j] = i��°���� ���� �� B�� ���� j�� �� A�� �ּ� ����
    dp[0][0] = 0; // �ʱ� ����

    for (int i = 0; i < itemCount; ++i) {
        vector<vector<int>> nextDp = dp;
        for (int bTrace = 0; bTrace < m; ++bTrace) {
            if (dp[i][bTrace] == INF) continue;

            // A������ i��° ���� ��ħ
            int aAdd = info[i][0];
            if (dp[i][bTrace] + aAdd < n)
                nextDp[i + 1][bTrace] = min(nextDp[i + 1][bTrace], dp[i][bTrace] + aAdd);

            // B������ i��° ���� ��ħ
            int bAdd = info[i][1];
            if (bTrace + bAdd < m)
                nextDp[i + 1][bTrace + bAdd] = min(nextDp[i + 1][bTrace + bAdd], dp[i][bTrace]);
        }
        dp = nextDp;
    }

    // ���� ���: i��°���� ��� ������ �� B���� ���� < m �� ���� �� A ���� �ּҰ�
    int result = INF;
    for (int bTrace = 0; bTrace < m; ++bTrace) {
        result = min(result, dp[itemCount][bTrace]);
    }

    return result < n ? result : -1;
}
