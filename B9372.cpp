#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        // 비행기 정보는 굳이 저장하지 않아도 됨
        for (int i = 0; i < M; ++i) {
            int a, b;
            cin >> a >> b;
        }
        cout << N - 1 << '\n';
    }
    return 0;
}
