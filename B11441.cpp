#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
long long LEFT[100001];
long long RIGHT[100001];
long long CROSS[100001];
long long SUM[100001];
long long LEFTSUM[100001];
long long RIGHTSUM[100001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, a;
        long long result=0;
    cin >> N;
    
    for (int i = 1; i <= N; i++)
    {
        cin >> CROSS[i];
    }
    for (int i = 1; i < N; i++)
    {
        cin >> LEFT[i];
        LEFTSUM[i] = LEFT[i]+LEFTSUM[i-1];
    }
    for (int i = 1; i < N; i++)
    {
        cin >> RIGHT[i];
        RIGHTSUM[i] = RIGHT[i] + RIGHTSUM[i - 1];
    }
    for (int i = 1; i <= N; i++){
        SUM[i] = LEFTSUM[i - 1] + CROSS[i] + RIGHTSUM[N - 1] - RIGHTSUM[i - 1];
    }
    
    SUM[0] = SUM[1];
    result = SUM[0];
    a = 1;
    for(int i=1;i<=N;i++){

        if (result > SUM[i])
        {
            result = SUM[i];
            a = i;
        }
    }
    cout << a << " " << result;

   



}