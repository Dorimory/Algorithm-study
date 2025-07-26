#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> q;

    // 1���� N���� ť�� ����
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    // ī�尡 1�� ���� ������ �ݺ�
    while (q.size() > 1) {
        q.pop();            // ���� �� ī�带 ����
        int top = q.front(); // ���� ī�带 ������
        q.pop();
        q.push(top);        // �Ʒ��� ����
    }

    // ������ ���� ī�� ���
    cout << q.front() << endl;

    return 0;
}
