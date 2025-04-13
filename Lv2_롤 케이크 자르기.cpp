#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> topping) {
    const int MAX_TOPPING = 10001;
    int left_count[MAX_TOPPING] = { 0 };
    int right_count[MAX_TOPPING] = { 0 };
    int left_kinds = 0;
    int right_kinds = 0;
    int answer = 0;
    for (int t : topping) {
        if (right_count[t] == 0)
            right_kinds++;
        right_count[t]++;
    }
    for (int i = 0; i <= topping.size(); ++i)
    {
        int t = topping[i];
        if (left_count[t] == 0)
            left_kinds++;
        left_count[t]++;
        right_count[t]--;
        if (right_count[t] == 0)
            right_kinds--;
        if (right_kinds == left_kinds)
            answer++;
    }

    return answer;
}

int main() {
    vector<int> topping1 = { 1, 2, 1, 3, 1, 4, 1, 2 };
    vector<int> topping2 = { 1, 2, 3, 1, 4 };

    cout << "예제1 결과: " << solution(topping1) << endl; // 출력: 2
    cout << "예제2 결과: " << solution(topping2) << endl; // 출력: 0

    return 0;
}
