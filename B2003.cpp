#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    int start = 0, end = 0, sum = 0, count = 0;
    while (true) {
        if (sum >= M) sum -= A[start++];
        else if (end == N) break;
        else sum += A[end++];

        if (sum == M) count++;
    }
    cout << count << '\n';
    return 0;
}
