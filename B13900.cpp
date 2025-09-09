#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
long long NUM[100001];
long long SUM[100001];
long long MUL[100001];
int main(){
    
    int N;
    long long result=0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> NUM[i];
        SUM[i] = NUM[i] + SUM[i - 1];
    }
    for (int i = 1; i <= N; i++)
    {
        MUL[i] = NUM[i] * (SUM[N] - SUM[i]);
        result =MUL[i]+result;
    }
    cout << result;



}