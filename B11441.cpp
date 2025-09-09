#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
long long NUM[100001];
long long SUM[100001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,M,a,b;
    long long result=0;
    cin >> N;
    
    for (int i = 1; i <= N; i++)
    {
        cin >> NUM[i];
        SUM[i] = NUM[i] + SUM[i - 1];
    }
    cin >> M;
    for (int i = 1; i <= M; i++)
    {
        cin >> a;
        cin >> b;

        result = SUM[b]-SUM[a-1];
        cout << result<<"\n";
    }
    



}