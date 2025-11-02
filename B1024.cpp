#include <iostream>
using namespace std;

int main() {
    long long N;
    int L;
    cin >> N >> L;

    for (int len = L; len <= 100; len++) {
        long long temp = N - (long long)len * (len - 1) / 2;

        if (temp < 0) break;

        if (temp % len == 0) {
            long long a = temp / len;

            for (int i = 0; i < len; i++) {
                cout << a + i << " ";
            }
            return 0;
        }
    }
    cout << -1;
    return 0;
}
