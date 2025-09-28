#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X;
    cin >> N >> X;

    vector<int> V(N);
    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    long long sum = 0;
    for (int i = 0; i < X; i++) {
        sum += V[i];
    }

    long long max_sum = sum;
    int count = 1;

    for (int i = X; i < N; i++) {
        sum += V[i] - V[i - X];
        if (sum > max_sum) {
            max_sum = sum;
            count = 1;
        }
        else if (sum == max_sum) {
            count++;
        }
    }

    if (max_sum == 0) {
        cout << "SAD\n";
    }
    else {
        cout << max_sum << "\n" << count << "\n";
    }

    return 0;
}
