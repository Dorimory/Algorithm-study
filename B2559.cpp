#include <iostream>
#include <vector>
using namespace std;
int NUM[100002], MUM[100002],SUM[100002];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   
    int N, M;
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        cin >> NUM[i];
        
    }
    SUM[1] = NUM[1];
    for (int i = 1; i <= N; i++)
    {
        SUM[i + 1] = NUM[i + 1] + SUM[i];
    }
    int result=-(1<<30);
    for (int j = M; j <= N ; j++)
    {
        
        MUM[j]=SUM[j] - SUM[j - M];
        if (MUM[j] > result)
            result = MUM[j];
    }
     
    
    cout << result << '\n';
    return 0;
}
