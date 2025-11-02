#include <iostream>
#include <vector>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int MAX = 100000;
    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = isPrime[1] = false;

    // 1. 소수 판별
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i)
                isPrime[j] = false;
        }
    }

    // 2. 소인수 개수 배열
    vector<int> factorCount(MAX + 1, 0);

    for (int i = 2; i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i; j <= MAX; j += i) {
                int temp = j;
                wh
