#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);

    for (int i = 0; i < N; ++i)
        cin >> A[i];

    for (int i = 0; i < N; ++i)
        cin >> B[i];

    sort(A.begin(),
