#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {


    int N, M;
    cin >> N >> M;

    unordered_set<string> unheard; // 듣도 못한 사람 저장
    vector<string> result;         // 듣보잡 결과 저장

    string name;
    for (int i = 0; i < N; ++i) {
        cin >> name;
        unheard.insert(name);
    }

    for (int i = 0; i < M; ++i) {
        cin >> name;
        if (unheard.count(name)) {
            result.push_back(name); // 듣도 보도 못한 사람
        }
    }

    sort(result.begin(), result.end()); // 사전순 정렬

    cout << result.size() << '\n';
    for (string n : result) {
        cout << n << '\n';
    }

    return 0;
}
