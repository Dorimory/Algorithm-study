#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    
    float N;
    int result;
    cin >> N;
    if (N >= 0)
    {
        if (N - (int)N >= 0.5)
            result = (int)N + 1;
        else result = (int)N;
    }
       
    if (N < 0)
        if (N - (int)N + 1 > 0.5)
            result = (int)N;
        else result = (int)N - 1;

    cout << result;



}