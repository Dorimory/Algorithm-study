#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
long long x[1000002], g[1000002];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long N, K;

    cin >> N;
    cin >> K;

    long long result = 0;
    long long buf = 0;
    long long MAX = -1;

    for (int i = 1; i <= N; i++)
    {
        cin >> buf;
        cin >> x[i];
        g[x[i]] = buf;
        if (MAX < x[i])
            MAX = x[i];

    }
    for (int i = 0; i <= 2 * K; i++)
        result += g[i];

    buf = result;
    for (int i = 2 * K + 1; i <= MAX; i++)
    {
        buf += g[i];
        if (i - (2 * K + 1) >= 0)
            buf -= g[i - (2 * K + 1)];
        if (buf > result)
            result = buf;


    }



    cout << result << '\n';
    return 0;
}
