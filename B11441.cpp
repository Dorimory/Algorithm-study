#include <iostream>
using namespace std;
long long A[1000001];
long long B[1000001];
long long C[2000002];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long N, M;

    cin >> N>> M;

    for (long long i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (long long j = 0; j < M; j++)
    {
        cin >> B[j];
    }

    long long Ap = 0;
    long long Bp = 0;
    long long i = 0;
    while (i < N + M) {
        if ((Ap == N) || (Bp == M)) {
            if (Ap == N) {
                C[i] = B[Bp];
                Bp++;
                cout << C[i] << ' ';
                i++;
                continue;

            }
            if (Bp == M) {
                C[i] = A[Ap];
                Ap++;
                cout << C[i] << ' ';
                i++;
                continue;
            }
          


        }



        if (A[Ap] < B[Bp])
        {
            C[i] = A[Ap];
            Ap++;
           
            cout << C[i] << ' ';
            i++;
            continue;
            
        }
        if (A[Ap] >= B[Bp])
        {
            C[i] = B[Bp];
            
            Bp++;
            cout << C[i] << ' ';
            i++;
            continue;
                   }



    
    }
    return 0;
}