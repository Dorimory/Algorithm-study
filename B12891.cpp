#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    char S[1000002], P[1000002];

    int N, M;
    
    cin >> N >>M;
    int A = 0, C = 0, G = 0, T = 0, result = 0;
    

    for (int i = 1; i <= N; i++)
    {
        cin >> S[i];
    }
    for (int i = 1; i <= M; i++)
    {
        P[i] = S[i];
        if (P[i] == 'A')
            A++;
        if (P[i] == 'C')
            C++;
        if (P[i] == 'G')
            G++;
        if (P[i] == 'T')
            T++;


    }
    
    int Acount;
    int Ccount;
    int Gcount;
    int Tcount;

        cin >> Acount;
        cin >> Ccount;
        cin >> Gcount;
        cin >> Tcount;

        if ((Acount <= A) && (Ccount <= C) && (Gcount <= G) && (Tcount <= T))
            result++;

      
    for (int i = M+1; i <= N ; i++)
    {
        if (S[i] == 'A')
            A++;
        if (S[i] == 'C')
            C++;
        if (S[i] == 'G')
            G++;
        if (S[i] == 'T')
            T++;
        if (S[i-M] == 'A')
            A--;
        if (S[i-M] == 'C')
            C--;
        if (S[i-M] == 'G')
            G--;
        if (S[i-M] == 'T')
            T--;

        if ((Acount <= A) && (Ccount <= C) && (Gcount <= G) && (Tcount <= T))
            result++;


        
    }
     
    
    cout << result << '\n';
    return 0;
}
