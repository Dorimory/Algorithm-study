#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, x, answer = 5;
    vector<int> arr;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < N; i++) {
        int cnt = 1;
        for (int j = i + 1; j < N; j++) {
            if (arr[j] <= arr[i] + 4) cnt++;
        }
        answer = min(answer, 5 - cnt); // 필요한 추가 원소 수의 최소값 갱신
    }
    cout << answer << endl;
    return 0;
}
