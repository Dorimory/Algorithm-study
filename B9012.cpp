#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); // 입력 버퍼 정리

    while (T--) {
        string s;
        getline(cin, s); // 한 줄 전체 읽기

        stack<char> st;
        bool valid = true;

        for (char c : s) {
            if (c == '(') {
                st.push(c);
            }
            else { // c == ')'
                if (st.empty()) {
                    valid = false;
                    break;
                }
                st.pop();
            }
        }

        if (!st.empty()) valid = false;
        cout << (valid ? "YES" : "NO") << '\n';
    }
    return 0;
}
