#include <iostream>
#include <cmath>
using namespace std;

bool isPalindrome(int x) {
    string s = to_string(x);
    string r = string(s.rbegin(), s.rend());
    return s == r;
}

bool isPrime(int x) {
    if (x < 2) return false;
    if (x % 2 == 0) return x == 2;
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    while (true) {
        if (isPalindrome(N) && isPrime(N)) {
            cout << N;
            break;
        }
        N++;
    }
    return 0;
}
