#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> stack;
    string command;

    // 버퍼에 남은 개행문자 제거
    cin.ignore();

    for (int i = 0; i < N; ++i) {
        getline(cin, command);
        if (command.substr(0, 4) == "push") {
            int x = stoi(command.substr(5));
            stack.push_back(x);
        }
        else if (command == "pop") {
            if (stack.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << stack.back() << '\n';
                stack.pop_back();
            }
        }
        else if (command == "size") {
            cout << stack.size() << '\n';
        }
        else if (command == "empty") {
            cout << (stack.empty() ? 1 : 0) << '\n';
        }
        else if (command == "top") {
            if (stack.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << stack.back() << '\n';
            }
        }
    }
    return 0;
}