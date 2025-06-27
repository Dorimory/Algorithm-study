#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {


    int N, M;
    cin >> N >> M;

    unordered_set<string> unheard; // �赵 ���� ��� ����
    vector<string> result;         // �躸�� ��� ����

    string name;
    for (int i = 0; i < N; ++i) {
        cin >> name;
        unheard.insert(name);
    }

    for (int i = 0; i < M; ++i) {
        cin >> name;
        if (unheard.count(name)) {
            result.push_back(name); // �赵 ���� ���� ���
        }
    }

    sort(result.begin(), result.end()); // ������ ����

    cout << result.size() << '\n';
    for (string n : result) {
        cout << n << '\n';
    }

    return 0;
}
