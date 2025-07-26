#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> q;

    // 1부터 N까지 큐에 넣음
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    // 카드가 1장 남을 때까지 반복
    while (q.size() > 1) {
        q.pop();            // 제일 위 카드를 버림
        int top = q.front(); // 다음 카드를 꺼내서
        q.pop();
        q.push(top);        // 아래로 보냄
    }

    // 마지막 남은 카드 출력
    cout << q.front() << endl;

    return 0;
}
